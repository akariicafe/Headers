@class UIImage, NSDate;

@interface LUILogScreenshotItem : NSObject

@property (retain, nonatomic) UIImage *screenshotImage;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } visibleRange;
@property (retain, nonatomic) NSDate *screenshotDate;

- (void).cxx_destruct;

@end
