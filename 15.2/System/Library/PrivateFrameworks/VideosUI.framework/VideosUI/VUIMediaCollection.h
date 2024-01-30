@class NSNumber, NSDate;

@interface VUIMediaCollection : VUIMediaEntity

@property (readonly, copy, nonatomic) NSDate *addedToDate;
@property (readonly, copy, nonatomic) NSNumber *mediaItemCount;
@property (readonly, copy, nonatomic) NSNumber *seasonCount;

- (id)description;

@end
