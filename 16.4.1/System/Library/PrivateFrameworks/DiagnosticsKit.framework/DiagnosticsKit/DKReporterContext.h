@class NSString;

@interface DKReporterContext : NSExtensionContext <DKReporterRemoteContext>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void)completeWithReport:(id)a0 completion:(id /* block */)a1;
- (void)startRemoteReportWithComponentIdentity:(id)a0 completion:(id /* block */)a1;

@end
