@class UIColor, NSString;

@interface NTKExtragalacticColorPalette : NTKFaceColorPalette <NTKExtragalacticColorPalette>

@property (readonly, nonatomic) UIColor *glyphColor0;
@property (readonly, nonatomic) UIColor *glyphColor1;
@property (readonly, nonatomic) UIColor *glyphColor2;
@property (readonly, nonatomic) UIColor *blackOverlapAndBackground;
@property (readonly, nonatomic) UIColor *backgroundTopLeft;
@property (readonly, nonatomic) UIColor *backgroundTopRight;
@property (readonly, nonatomic) UIColor *backgroundBottomLeft;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)swatch;

@end
