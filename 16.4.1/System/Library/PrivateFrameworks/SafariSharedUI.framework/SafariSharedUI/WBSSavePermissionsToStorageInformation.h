@class WBSWebExtensionData;

@interface WBSSavePermissionsToStorageInformation : NSObject

@property (readonly, nonatomic) WBSWebExtensionData *webExtension;
@property (readonly, nonatomic) BOOL permissionsWereUpdatedDueToAnExternalChange;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithWebExtension:(id)a0 permissionsWereUpdatedDueToAnExternalChange:(BOOL)a1;

@end
