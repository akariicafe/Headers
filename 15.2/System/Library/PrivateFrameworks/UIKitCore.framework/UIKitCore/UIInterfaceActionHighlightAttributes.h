@class NSArray, UIColor;

@interface UIInterfaceActionHighlightAttributes : NSObject <NSCopying>

@property (nonatomic) double opacity;
@property (retain, nonatomic) NSArray *filters;
@property (retain, nonatomic) UIColor *backgroundColor;

- (id)newBackgroundHighlightView;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (BOOL)_hasNonClearBackgroundColor;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
