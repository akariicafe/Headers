@class NSString;

@interface SBWindowHideRequest : NSObject

@property struct SBWindowLevelRange_struct { double start; double end; } windowLevelRange;
@property (copy) NSString *reason;

+ (id)hideRequestWithWindowLevelRange:(struct SBWindowLevelRange_struct { double x0; double x1; })a0 reason:(id)a1;

- (void).cxx_destruct;
- (id)description;

@end
