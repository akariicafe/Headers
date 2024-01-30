@class NSArray, NSMutableArray;

@interface HMEPendingEventsCollection : NSObject

@property (retain, nonatomic) NSMutableArray *mutableEventItems;
@property (readonly, copy, nonatomic) NSArray *eventItems;

- (void).cxx_destruct;
- (id)init;
- (id)initWithEvents:(id)a0;
- (void)addEventInfo:(id)a0;
- (void)combinePreviousEvents:(id)a0;
- (void)resetItems;

@end
