@class NSNumber, UIColor;

@interface ICAuthorHighlightValue : NSObject

@property (copy, nonatomic) NSNumber *value;
@property (copy, nonatomic) UIColor *color;
@property (nonatomic, getter=isAboveImplicitHighlights) BOOL aboveImplicitHighlights;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
