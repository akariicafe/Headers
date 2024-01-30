@class EKEventStore;

@interface SXEventStoreProvider : NSObject

@property (readonly, nonatomic) EKEventStore *eventStore;

- (void).cxx_destruct;

@end
