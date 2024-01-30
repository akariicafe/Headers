@class UIColor, NSString;

@interface NTKExplorerColorPalette : NTKFaceColorPalette <NTKExplorerColorPalette>

@property (readonly, nonatomic) UIColor *hands;
@property (readonly, nonatomic) UIColor *handsInlay;
@property (readonly, nonatomic) UIColor *secondHand;
@property (readonly, nonatomic) UIColor *secondHandInlay;
@property (readonly, nonatomic) UIColor *complication;
@property (readonly, nonatomic) UIColor *complicationPlatter;
@property (readonly, nonatomic) UIColor *red;
@property (readonly, nonatomic) UIColor *deepRed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)_hands;
- (id)_handsInlay;
- (id)_secondHand;
- (id)_secondHandInlay;
- (id)tritium_hands;
- (id)tritium_handsInlay;

@end
