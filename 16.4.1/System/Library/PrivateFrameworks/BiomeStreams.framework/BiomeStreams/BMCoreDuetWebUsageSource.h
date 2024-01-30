@class NSString, NSMutableDictionary, BMWebUsageEvent, BMSource;
@protocol BMCoreDuetWebUsageStore;

@interface BMCoreDuetWebUsageSource : NSObject <BMSourceProtocol> {
    NSMutableDictionary *_contextUsageRecord;
    BMWebUsageEvent *_previousEvent;
    BMSource *_storeSource;
}

@property (retain, nonatomic) id<BMCoreDuetWebUsageStore> storage;
@property (readonly, nonatomic) NSString *identifier;

- (id)initWithSource:(id)a0;
- (void)sendEvent:(id)a0;
- (void).cxx_destruct;

@end
