@class NSArray, NSDate;

@interface _DKSyncChanges : NSObject

@property (readonly, nonatomic) NSArray *additionChangeSets;
@property (readonly, nonatomic) NSArray *deletionChangeSets;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;

- (void).cxx_destruct;

@end
