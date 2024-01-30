@class NMSKeepLocalRequestOptions, MPModelObject, UIViewController;

@interface NMUDownloadWaitingAlertController : NSObject {
    MPModelObject *_modelObject;
    unsigned long long _status;
    unsigned long long _downloadPauseReason;
    NMSKeepLocalRequestOptions *_keepLocalRequestOptions;
    UIViewController *_presentingViewController;
}

+ (id)requiredPropertiesForModelKind:(id)a0;

- (void).cxx_destruct;
- (void)presentWithCompletion:(id /* block */)a0;
- (id)initWithModelObject:(id)a0 status:(unsigned long long)a1 downloadPauseReason:(unsigned long long)a2 options:(id)a3 presentingViewController:(id)a4;

@end
