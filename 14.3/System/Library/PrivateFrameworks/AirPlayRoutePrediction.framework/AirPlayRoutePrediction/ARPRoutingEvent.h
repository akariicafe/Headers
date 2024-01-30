@class NSString, NSDictionary, NSDateInterval;

@interface ARPRoutingEvent : NSObject

@property (readonly, copy, nonatomic) NSString *bundleID;
@property (readonly, copy, nonatomic) NSString *outputDeviceID;
@property (readonly, copy, nonatomic) NSDateInterval *interval;
@property (readonly, nonatomic) NSDictionary *probabilityVector;

+ (id)mostRecentRoutingEventInDateInterval:(id)a0 knowledgeStore:(id)a1 eventLimit:(unsigned long long)a2 longFormVideoFilter:(id /* block */)a3;

- (void).cxx_destruct;
- (id)description;
- (id)initWithBundleID:(id)a0 outputDeviceID:(id)a1 interval:(id)a2 probabilityVector:(id)a3;

@end
