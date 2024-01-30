@class UIColor, NSDate;

@interface ICAuthorHighlightAnimationAttribute : NSObject <NSCopying>

@property (copy, nonatomic) NSDate *startDate;
@property (nonatomic) double duration;
@property (nonatomic) double fromValue;
@property (nonatomic) double toValue;
@property (copy, nonatomic) UIColor *color;
@property (nonatomic, getter=isAboveExistingHighlights) BOOL aboveExistingHighlights;
@property (nonatomic, getter=isRemovedOnCompletion) BOOL removedOnCompletion;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithStartDate:(id)a0;

@end
