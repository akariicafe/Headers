@class RMSubscriberStore;

@interface RMConfigurationStatusUpdater : NSObject

@property (readonly, weak, nonatomic) RMSubscriberStore *store;

+ (id)fileSystemSafeCharacterSet;
+ (id)getStatusDirectoryURLWithParentURL:(id)a0 declarationType:(id)a1 declarationIdentifier:(id)a2 serverToken:(id)a3;

- (void).cxx_destruct;
- (void)_persistStatusForDeclarationType:(id)a0 declarationIdentifier:(id)a1 serverToken:(id)a2 validity:(BOOL)a3 reasons:(id)a4;
- (id)_getStatusFileURLForDeclarationType:(id)a0 declarationIdentifier:(id)a1 serverToken:(id)a2;
- (id)getStatusDirectoryURLForDeclarationType:(id)a0 declarationIdentifier:(id)a1 serverToken:(id)a2;
- (id)initWithSubscriberStore:(id)a0;
- (void)assetCannotBeDeserialized:(id)a0 error:(id)a1;
- (void)assetCannotBeDownloaded:(id)a0 error:(id)a1;
- (void)assetCannotBeVerified:(id)a0 error:(id)a1;
- (void)assetEncounteredInternalError:(id)a0 error:(id)a1;
- (void)assetSuccessfullyResolved:(id)a0;
- (void)configurationCannotBeDeserialized:(id)a0 error:(id)a1;
- (void)configurationFailedToApply:(id)a0 error:(id)a1;
- (void)configurationIsInvalid:(id)a0 error:(id)a1;
- (void)configurationSuccessfullyApplied:(id)a0;

@end
