@class CALayer, UIColor;

@interface _NTKColorManager : NSObject

@property (retain, nonatomic) CALayer *layer;
@property (retain, nonatomic) UIColor *color;
@property (readonly, nonatomic) UIColor *contentColor;

- (void).cxx_destruct;
- (BOOL)shouldAnimatePropertyWithKey:(id)a0;
- (void)_updateFilterColor;

@end
