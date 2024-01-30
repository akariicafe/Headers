@class _DASExtension, NSString, NSObject;
@protocol OS_os_log;

@interface _DASExtensionRemoteContext : NSExtensionContext <_DASRemoteExtensionContextProtocol>

@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (readonly) _DASExtension *extension;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)extensionRunnerClassAllowList;

- (void)performActivity:(id)a0;
- (void)suspend;
- (id)init;
- (void).cxx_destruct;
- (id)createExtensionRunnerWithClassName:(id)a0;
- (id)hostContextWithError:(id *)a0;

@end
