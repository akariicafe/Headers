@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface BRCClientState : NSObject {
    NSMutableDictionary *_dict;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)objectForKey:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionary;
- (id)objectForKeyedSubscript:(id)a0;

@end
