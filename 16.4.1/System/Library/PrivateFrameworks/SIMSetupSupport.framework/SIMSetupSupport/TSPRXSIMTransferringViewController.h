@class UIStackView, NSString, UIActivityIndicatorView, UILabel, CoreTelephonyClient, IMOneTimeCodeAccelerator;
@protocol TSSIMSetupFlowDelegate;

@interface TSPRXSIMTransferringViewController : PRXCardContentViewController <TSSetupFlowItem>

@property (weak) id<TSSIMSetupFlowDelegate> delegate;
@property (retain) UIActivityIndicatorView *indicatorView;
@property (retain) UIStackView *stackView;
@property (retain) UILabel *oneTimeCodeLabel;
@property (retain) IMOneTimeCodeAccelerator *oneTimeCodeAccelerator;
@property (retain) CoreTelephonyClient *client;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_maybeEnableOneTimeCodeCheck;
- (void)_setupOneTimeCodeDetection;

@end
