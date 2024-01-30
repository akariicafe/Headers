@class UIView;
@protocol PXCloudQuotaControllerDelegate;

@interface PXCloudQuotaController : NSObject

@property (retain, nonatomic) UIView *informationView;
@property (weak, nonatomic) id<PXCloudQuotaControllerDelegate> delegate;

- (void).cxx_destruct;
- (id)init;
- (id)presentingViewControllerForInformationView;

@end
