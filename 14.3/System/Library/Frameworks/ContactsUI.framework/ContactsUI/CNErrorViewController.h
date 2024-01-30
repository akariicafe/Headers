@class NSString, UILabel;

@interface CNErrorViewController : UIViewController <UIAdaptivePresentationControllerDelegate>

@property (readonly, copy, nonatomic) NSString *errorMessage;
@property (readonly, nonatomic) UILabel *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
