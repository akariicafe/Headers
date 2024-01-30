@class NSArray, UIColor;

@interface UIInterfaceActionHighlightAttributes : NSObject <NSCopying>

@property (nonatomic) double opacity;
@property (retain, nonatomic) NSArray *filters;
@property (retain, nonatomic) UIColor *backgroundColor;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)_hasNonClearBackgroundColor;
- (id)newBackgroundHighlightView;

@end
