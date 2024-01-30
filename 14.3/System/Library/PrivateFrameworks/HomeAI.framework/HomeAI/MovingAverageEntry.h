@class NSNumber, NSDate;

@interface MovingAverageEntry : HMFObject

@property (readonly) NSNumber *value;
@property (readonly) NSDate *date;

- (void).cxx_destruct;
- (id)initWithValue:(id)a0;

@end
