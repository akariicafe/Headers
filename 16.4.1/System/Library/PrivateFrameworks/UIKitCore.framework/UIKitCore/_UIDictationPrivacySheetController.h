@class OBPrivacyPresenter, VTUIDictationDataSharingOptInPresenter;
@protocol _UIDictationPrivacySheetControllerDelegate;

@interface _UIDictationPrivacySheetController : UINavigationController

@property (nonatomic) id<_UIDictationPrivacySheetControllerDelegate> privacyDelegate;
@property (retain, nonatomic) OBPrivacyPresenter *privacyPresenter;
@property (nonatomic) long long sheetType;
@property (retain, nonatomic) VTUIDictationDataSharingOptInPresenter *dataSharingOptInPresenter;

- (void)dismiss;
- (BOOL)_canShowWhileLocked;
- (id)initWithType:(long long)a0;
- (void)setPresentationDelegate:(id)a0;
- (void).cxx_destruct;

@end
