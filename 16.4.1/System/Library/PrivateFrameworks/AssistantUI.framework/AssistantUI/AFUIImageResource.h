@class NSString, NSBundle, NSURL, SAUIAppPunchOut;

@interface AFUIImageResource : NSObject

@property (copy, nonatomic) NSString *localResourceName;
@property (copy, nonatomic) NSString *localPressedResourceName;
@property (retain, nonatomic) SAUIAppPunchOut *localPunchOut;
@property (retain, nonatomic) NSBundle *localResourceBundle;
@property (copy, nonatomic) NSURL *remoteURL;
@property (copy, nonatomic) NSURL *remotePressedURL;
@property (retain, nonatomic) SAUIAppPunchOut *remotePunchOut;
@property (nonatomic) double remoteScale;
@property (nonatomic) double remotePressedScale;
@property (nonatomic) struct CGSize { double width; double height; } logoSize;

+ (id)imageResourceFromKey:(id)a0 pressedKey:(id)a1 punchOut:(id)a2;
+ (id)imageResourceWithAppPunchOut:(id)a0;
+ (id)imageResourceWithLocalResourceName:(id)a0 pressedResourceName:(id)a1 localPunchOut:(id)a2 bundle:(id)a3;

- (void).cxx_destruct;
- (void)_fetchLocalResourcesWithCompletion:(id /* block */)a0;
- (void)_fetchRemoteResourcesWithCompletion:(id /* block */)a0;
- (id)_imageInLocalResourceBundleNamed:(id)a0;
- (void)getLogoWithCompletion:(id /* block */)a0;

@end
