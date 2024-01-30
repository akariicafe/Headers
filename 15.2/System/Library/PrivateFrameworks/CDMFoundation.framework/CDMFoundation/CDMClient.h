@class NSError, CDMServiceCenter, NSString;
@protocol CDMClientDelegate;

@interface CDMClient : NSObject {
    id<CDMClientDelegate> _delegate;
    CDMServiceCenter *_serviceCenter;
    NSString *_localeIdentifier;
}

@property (readonly, nonatomic) BOOL successFromSetup;
@property (readonly, nonatomic) NSError *errorFromSetup;

+ (id)createEmptyRequestId;

- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setup:(id)a0;
- (id)getLocaleIdentifier;
- (BOOL)areAssetsAvailable:(id)a0;
- (BOOL)registerWithAssetsDelegate:(id)a0;
- (void)doServiceCenterSetupWithConfig:(id)a0;
- (id)createNSError:(id)a0 errorCode:(long long)a1;
- (void)doServiceCenterHandleCommand:(id)a0 forCallback:(id /* block */)a1;
- (BOOL)registerWithAssetsDelegate:(id)a0 forLocale:(id)a1;
- (void)processCDMNLXRequest:(id)a0;
- (void)processNLURequest:(id)a0;

@end
