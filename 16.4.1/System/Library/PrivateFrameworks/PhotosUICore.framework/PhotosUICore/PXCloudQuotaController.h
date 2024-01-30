@class UIView;
@protocol PXCloudQuotaControllerDelegate;

@interface PXCloudQuotaController : NSObject

@property (retain, nonatomic) UIView *informationView;
@property (weak, nonatomic) id<PXCloudQuotaControllerDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (id)presentingViewControllerForInformationView;

@end
