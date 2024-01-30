@class UIImageView, UIFontDescriptor, NSString;
@protocol CLKMonochromeFilterProvider;

@interface REUIScaledFullColorImageView : UIView <CLKFullColorImageView>

@property (readonly, nonatomic) UIImageView *imageView;
@property (copy, nonatomic) UIFontDescriptor *fontDescriptor;
@property (nonatomic) double fontSizeFactor;
@property (weak, nonatomic) id<CLKMonochromeFilterProvider> filterProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
