@class NSString;

@interface DNDSApplicationIdentifierMapper : NSObject <DNDSApplicationIdentifierMapping>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_macOSBundleIDForiOSBundleID:(id)a0;
- (id)applicationIdentifierForSyncWithSourceApplicationIdentifier:(id)a0;
- (id)applicationIdentifierForTargetPlatform:(unsigned long long)a0 withSourceApplicationIdentifier:(id)a1;
- (id)applicationIdentifierForFileWithSourceApplicationIdentifier:(id)a0;
- (id)_iOSBundleIDForMacOSBundleID:(id)a0;

@end
