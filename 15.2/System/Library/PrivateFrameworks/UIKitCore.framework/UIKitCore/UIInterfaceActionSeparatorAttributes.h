@class NSArray, UIColor;

@interface UIInterfaceActionSeparatorAttributes : NSObject <NSCopying>

@property (retain, nonatomic) NSArray *filters;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) double opacity;

- (id)newSeparatorView;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (BOOL)_hasNonClearBackgroundColor;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
