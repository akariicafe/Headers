@class NSUUID, HMEPendingEventsCollection, NSDate;

@interface HMEConnectionInfoItem : NSObject

@property (nonatomic) BOOL hasPendingRequest;
@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) HMEPendingEventsCollection *pendingEventItems;
@property (readonly, nonatomic) HMEPendingEventsCollection *pendingCachedEventItems;
@property (retain, nonatomic) NSDate *expiry;
@property (retain, nonatomic) NSDate *debounceStartTime;
@property (weak, nonatomic) id connection;

- (void).cxx_destruct;
- (id)initWithConnection:(id)a0 expiry:(id)a1;

@end
