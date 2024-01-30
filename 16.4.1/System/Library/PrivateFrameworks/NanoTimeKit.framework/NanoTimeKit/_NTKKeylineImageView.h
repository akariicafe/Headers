@class UIColor, NSString, NTKKeylineTouchable;

@interface _NTKKeylineImageView : CLKUIColoringImageView <NTKKeylineView>

@property (copy, nonatomic) id /* block */ colorizationBlock;
@property (retain, nonatomic) NTKKeylineTouchable *touchable;
@property (retain, nonatomic) UIColor *color;
@property (nonatomic) BOOL usesLegibility;
@property (retain, nonatomic) UIColor *overrideColor;
@property (readonly, nonatomic) UIColor *contentColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
