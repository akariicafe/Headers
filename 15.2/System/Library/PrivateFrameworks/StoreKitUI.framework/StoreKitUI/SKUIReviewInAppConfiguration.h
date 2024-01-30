@class NSString, SKUIClientContext, UIImage, UIViewController;

@interface SKUIReviewInAppConfiguration : NSObject

@property (copy, nonatomic) NSString *itemID;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIViewController *viewController;
@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (copy, nonatomic) NSString *customDescription;
@property (retain, nonatomic) UIImage *icon;
@property (nonatomic, getter=isSandboxed) BOOL sandboxed;

- (void).cxx_destruct;

@end
