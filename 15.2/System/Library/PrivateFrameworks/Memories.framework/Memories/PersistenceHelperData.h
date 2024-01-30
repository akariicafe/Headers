@class NSDictionary, MiroBlueprint, NSDate;

@interface PersistenceHelperData : NSObject

@property (nonatomic) long long schema;
@property (retain, nonatomic) MiroBlueprint *blueprint;
@property (nonatomic) double customDuration;
@property (nonatomic) long long pickedItemCount;
@property (nonatomic) long long durationRange;
@property (nonatomic) double duration;
@property (nonatomic) long long maxDurationRange;
@property (retain, nonatomic) NSDate *viewedDate;
@property (retain, nonatomic) NSDictionary *loadedFreezeRanges;
@property (retain, nonatomic) NSDate *lastSaveDate;

- (void).cxx_destruct;

@end
