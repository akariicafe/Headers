@class NSDate;

@interface PARImagesPropensity : NSManagedObject

@property (nonatomic) short image;
@property (nonatomic) short other;
@property (nonatomic) short querySuggestion;
@property (nonatomic) short recentResult;
@property (copy, nonatomic) NSDate *timestamp;
@property (nonatomic) short zkw;

+ (id)fetchRequest;

@end
