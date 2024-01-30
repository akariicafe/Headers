@class UIColor, HFServiceNameComponents, UIVisualEffect;
@protocol HFStringGenerator;

@interface HUGridServiceCellTextConfiguration : NSObject

@property (retain, nonatomic) HFServiceNameComponents *nameComponents;
@property (retain, nonatomic) id<HFStringGenerator> descriptionText;
@property (retain, nonatomic) UIColor *nameTextColor;
@property (retain, nonatomic) UIColor *descriptionTextColor;
@property (retain, nonatomic) UIVisualEffect *descriptionTextEffect;

- (void).cxx_destruct;

@end
