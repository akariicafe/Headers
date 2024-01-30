@class NSString;
@protocol DKExtensionHostAdapterDelegate;

@interface DKReportHostContext : NSExtensionContext <DKReportHostRemoteContext, DKExtensionHostAdapter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<DKExtensionHostAdapterDelegate> delegate;

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;

@end
