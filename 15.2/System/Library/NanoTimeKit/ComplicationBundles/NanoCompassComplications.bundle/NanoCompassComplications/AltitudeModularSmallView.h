@class NSString, UIImageView, UILabel, CLKDevice;
@protocol CLKMonochromeFilterProvider;

@interface AltitudeModularSmallView : UIView <CLKFullColorImageView>

@property (retain, nonatomic) CLKDevice *device;
@property (retain, nonatomic) UIImageView *upperImage;
@property (retain, nonatomic) UIImageView *lowerImage;
@property (retain, nonatomic) UILabel *label;
@property (weak, nonatomic) id<CLKMonochromeFilterProvider> filterProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initFullColorImageViewWithDevice:(id)a0;
- (void)pauseLiveFullColorImageView;
- (void)resumeLiveFullColorImageView;
- (void)configureWithImageProvider:(id)a0 reason:(long long)a1;

@end
