@class NSString, TFAppLockup, NSURL;

@interface TFLaunchScreen : NSObject

@property (readonly, nonatomic) TFAppLockup *lockup;
@property (readonly, copy, nonatomic) NSString *testerNotes;
@property (readonly, nonatomic) NSURL *howToScreenshotSupportUrl;

- (void).cxx_destruct;
- (id)initWithLockup:(id)a0 testerNotes:(id)a1 howToScreenshotSupportUrl:(id)a2;

@end
