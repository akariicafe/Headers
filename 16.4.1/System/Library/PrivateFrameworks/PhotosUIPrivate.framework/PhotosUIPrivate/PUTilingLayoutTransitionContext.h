@class NSObject;
@protocol OS_dispatch_group;

@interface PUTilingLayoutTransitionContext : NSObject

@property (nonatomic, setter=setCancelingTransition:) BOOL isCancelingTransition;
@property (nonatomic) BOOL isViewControllerTransition;
@property (nonatomic) BOOL isUpdatingDisplayedContent;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *displayedContentUpdateGroup;

- (void).cxx_destruct;

@end
