@class NSString, NSURL, NSError;

@interface FPUIActionExtensionContext : NSExtensionContext

@property (copy) NSString *domainIdentifier;
@property (copy) NSURL *initialURL;
@property (retain, nonatomic) NSError *setupError;

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;

- (void)openURL:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)cancelRequestWithError:(id)a0;
- (id)_remoteContext;
- (void)completeRequestWithUserInfo:(id)a0;
- (void)completeRequest;
- (void)didEncounterError:(id)a0 completionHandler:(id /* block */)a1;

@end
