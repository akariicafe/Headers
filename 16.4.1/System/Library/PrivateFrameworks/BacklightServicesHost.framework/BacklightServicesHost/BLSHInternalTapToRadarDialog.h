@class BLSHTapToRadarDescriptor, NSObject;
@protocol OS_os_log;

@interface BLSHInternalTapToRadarDialog : NSObject {
    NSObject<OS_os_log> *_log;
    id /* block */ _completion;
}

@property (readonly, nonatomic) BLSHTapToRadarDescriptor *descriptor;

- (void)_cancel;
- (void).cxx_destruct;
- (void)_file;
- (void)_ignore;
- (void)presentWithCompletion:(id /* block */)a0;
- (void)_alertDidDismiss:(long long)a0;
- (void)_gotError;
- (BOOL)_shouldIgnore;
- (void)callCompletion:(BOOL)a0 shouldTryAgain:(BOOL)a1;
- (id)initWithDescriptor:(id)a0 log:(id)a1;

@end
