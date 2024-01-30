@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface BRCClientState : NSObject {
    NSMutableDictionary *_dict;
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)objectForKey:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (id)dictionary;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)description;
- (id)objectForKeyedSubscript:(id)a0;
- (id)initWithDictionary:(id)a0;

@end
