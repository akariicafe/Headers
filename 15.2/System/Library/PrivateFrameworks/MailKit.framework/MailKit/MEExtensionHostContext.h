@class NSString;
@protocol MEMailComposeExtensionHostDelegate;

@interface MEExtensionHostContext : NSExtensionContext <MEExtensionRemoteHostProtocol>

@property (weak, nonatomic) id<MEMailComposeExtensionHostDelegate> composeExtensionHostDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;
+ (id)extensionHostRequestScheduler;

- (void).cxx_destruct;
- (void)regenerateEmailAddressTokenChangesForSession:(id)a0;

@end
