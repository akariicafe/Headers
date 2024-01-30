@class NSString, HMEEvent;

@interface HMEEventInfo : NSObject

@property (readonly, nonatomic) HMEEvent *event;
@property (readonly, copy, nonatomic) NSString *topic;

+ (id)fromProtobuff:(id)a0;
+ (id)eventsMapFromEventInfos:(id)a0;
+ (id)eventsMapFromProtoEvents:(id)a0;
+ (id)eventInfoFromProtoData:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)pbEventInfo;
- (id)initWithEvent:(id)a0 topic:(id)a1;

@end
