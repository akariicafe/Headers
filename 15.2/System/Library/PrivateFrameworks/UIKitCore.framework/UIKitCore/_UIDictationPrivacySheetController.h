@class OBPrivacyPresenter, VTUIDictationDataSharingOptInPresenter;
@protocol _UIDictationPrivacySheetControllerDelegate;

@interface _UIDictationPrivacySheetController : UINavigationController

@property (nonatomic) id<_UIDictationPrivacySheetControllerDelegate> privacyDelegate;
@property (retain, nonatomic) OBPrivacyPresenter *privacyPresenter;
@property (nonatomic) long long sheetType;
@property (retain, nonatomic) VTUIDictationDataSharingOptInPresenter *dataSharingOptInPresenter;

- (void)setPresentationDelegate:(id)a0;
- (void)dismiss;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0;

@end
