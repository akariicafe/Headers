@class NSMutableDictionary, NSMutableSet;
@protocol PAAccessRecord;

@interface PAAccessRecordAccumulator : NSObject

@property (retain, nonatomic) id<PAAccessRecord> record;
@property (readonly, nonatomic) NSMutableDictionary *ongoingIntervals;
@property (readonly, nonatomic) NSMutableSet *seenEvents;

- (id)init;
- (void).cxx_destruct;

@end
