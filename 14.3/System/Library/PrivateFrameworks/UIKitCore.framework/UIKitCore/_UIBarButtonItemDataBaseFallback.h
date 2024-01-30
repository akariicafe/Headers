@class NSString;

@interface _UIBarButtonItemDataBaseFallback : NSObject <_UIBarButtonItemDataFallback>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fallback;

- (id)backgroundImageForState:(long long)a0 style:(long long)a1;
- (id)colorForState:(long long)a0 style:(long long)a1;
- (struct UIOffset { double x0; double x1; })backgroundImagePositionAdjustmentForState:(long long)a0 style:(long long)a1;
- (id)fontForState:(long long)a0 style:(long long)a1;
- (struct UIOffset { double x0; double x1; })titlePositionAdjustmentForState:(long long)a0 style:(long long)a1;

@end
