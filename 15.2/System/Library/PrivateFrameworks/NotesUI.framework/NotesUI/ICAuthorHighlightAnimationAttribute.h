@class NSDate;

@interface ICAuthorHighlightAnimationAttribute : NSObject <NSCopying>

@property (copy, nonatomic) NSDate *startDate;
@property (nonatomic) double duration;
@property (nonatomic) double fromValue;
@property (nonatomic) double toValue;
@property (nonatomic, getter=isAboveExistingHighlights) BOOL aboveExistingHighlights;
@property (nonatomic, getter=isRemovedOnCompletion) BOOL removedOnCompletion;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithStartDate:(id)a0;

@end
