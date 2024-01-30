@class NSString, NSMutableSet, NSUserDefaults;

@interface FPPersistentStringSet : NSObject {
    NSString *_key;
    NSMutableSet *_strings;
    NSUserDefaults *_defaults;
}

- (void)add:(id)a0;
- (void)remove:(id)a0;
- (void).cxx_destruct;
- (void)save;
- (id)initWithDefaults:(id)a0 key:(id)a1;
- (BOOL)contains:(id)a0;

@end
