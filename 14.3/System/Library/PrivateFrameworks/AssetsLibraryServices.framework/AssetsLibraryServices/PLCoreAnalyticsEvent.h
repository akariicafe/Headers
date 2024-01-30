@class NSDictionary, NSString, NSMutableDictionary;

@interface PLCoreAnalyticsEvent : NSObject {
    NSString *_event;
    NSMutableDictionary *_mutablePayload;
}

@property (readonly) NSDictionary *payload;

- (void)publish;
- (void)removeKey:(id)a0;
- (id)initWithEvent:(id)a0 payload:(id)a1;
- (void).cxx_destruct;
- (void)mergePayload:(id)a0;
- (id)description;
- (void)addKey:(id)a0 value:(id)a1;

@end
