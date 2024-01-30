@class NSNumber;

@interface ICAuthorHighlightAnimation : NSObject

@property (copy, nonatomic) NSNumber *duration;
@property (copy, nonatomic) NSNumber *fromValue;
@property (copy, nonatomic) NSNumber *toValue;
@property (nonatomic, getter=isAboveExistingHighlights) BOOL aboveExistingHighlights;
@property (nonatomic, getter=isRemovedOnCompletion) BOOL removedOnCompletion;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
