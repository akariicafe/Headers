@class UIViewController;
@protocol CSPageViewControllerProtocol;

@interface CSPageViewBase : CSCoverSheetViewBase <CSPageView>

@property (weak, nonatomic) UIViewController<CSPageViewControllerProtocol> *pageViewController;
@property (nonatomic) double contentWidth;

- (void).cxx_destruct;

@end
