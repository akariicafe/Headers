@interface RMConfigurationStatusUpdater : NSObject

+ (id)fileSystemSafeCharacterSet;
+ (id)getStatusDirectoryURLForChannel:(id)a0 declarationType:(id)a1 declarationIdentifier:(id)a2 serverToken:(id)a3;

- (void)assetCannotBeDownloaded:(id)a0 error:(id)a1;
- (void)assetSuccessfullyResolved:(id)a0;
- (void)assetCannotBeVerified:(id)a0 error:(id)a1;
- (void)assetEncounteredInternalError:(id)a0 error:(id)a1;
- (void)_persistStatusForChannel:(id)a0 declarationType:(id)a1 declarationIdentifier:(id)a2 serverToken:(id)a3 validity:(BOOL)a4 reasons:(id)a5;
- (id)_getStatusFileURLForChannel:(id)a0 declarationType:(id)a1 declarationIdentifier:(id)a2 serverToken:(id)a3;
- (void)assetCannotBeDeserialized:(id)a0 error:(id)a1;
- (void)configurationCannotBeDeserialized:(id)a0 error:(id)a1;
- (void)configurationFailedToApply:(id)a0 error:(id)a1;
- (void)configurationIsInvalid:(id)a0 error:(id)a1;
- (void)configurationSuccessfullyApplied:(id)a0;

@end
