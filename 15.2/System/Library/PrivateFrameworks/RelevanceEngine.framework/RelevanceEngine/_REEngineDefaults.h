@class NSString, NSMutableDictionary, NSMutableSet, NSObject, NSUserDefaults;
@protocol OS_dispatch_queue;

@interface _REEngineDefaults : NSObject {
    NSString *_domain;
    NSUserDefaults *_defaults;
    NSMutableSet *_registeredPaths;
    NSMutableDictionary *_registeredBlocks;
    NSObject<OS_dispatch_queue> *_registrationQueue;
}

+ (id)defaultsForEngine:(id)a0;
+ (id)globalDefaults;

- (id)initWithDomain:(id)a0;
- (BOOL)_BOOLValueForKey:(id)a0 set:(BOOL *)a1;
- (long long)_NSIntegerValueForKey:(id)a0 set:(BOOL *)a1;
- (void)_registerCallback:(id /* block */)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)_idValueForKey:(id)a0 set:(BOOL *)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (id)_domainName;

@end
