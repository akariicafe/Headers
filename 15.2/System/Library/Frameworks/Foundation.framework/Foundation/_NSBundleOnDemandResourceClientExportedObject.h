@class NSString;

@interface _NSBundleOnDemandResourceClientExportedObject : NSObject <ODRClientProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendLowDiskSpaceNotification;

@end
