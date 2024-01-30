@class NSString, MRPlayerPath, UIImage, UIViewController;

@interface MFDebugOverlayController : NSObject {
    void /* unknown type, empty encoding */ overlayViewController;
    void /* unknown type, empty encoding */ store;
}

@property (nonatomic, retain) MRPlayerPath *playerPath;
@property (nonatomic, copy) NSString *contentItemID;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, readonly) UIViewController *viewController;

- (void).cxx_destruct;
- (id)init;

@end
