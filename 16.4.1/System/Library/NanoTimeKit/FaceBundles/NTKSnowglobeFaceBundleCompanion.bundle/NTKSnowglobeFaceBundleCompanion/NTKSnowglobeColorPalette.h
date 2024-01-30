@class UIColor, NSString;

@interface NTKSnowglobeColorPalette : NTKFaceColorPalette <NTKSnowglobeColorPalette>

@property (retain, nonatomic) UIColor *background;
@property (retain, nonatomic) UIColor *backlightColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)primaryColor;
- (id)_backlightColor;
- (id)backgroundObjectColors;

@end
