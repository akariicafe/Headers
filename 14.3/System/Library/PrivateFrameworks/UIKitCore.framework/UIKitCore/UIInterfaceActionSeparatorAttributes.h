@class NSArray, UIColor;

@interface UIInterfaceActionSeparatorAttributes : NSObject <NSCopying>

@property (retain, nonatomic) NSArray *filters;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) double opacity;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_hasNonClearBackgroundColor;
- (BOOL)isEqual:(id)a0;
- (id)newSeparatorView;

@end
