@class NSCloudKitMirroringDelegateOptions;

@interface PFCloudKitOptionsValidator : NSObject

@property (readonly, nonatomic) NSCloudKitMirroringDelegateOptions *parsedOptions;

- (BOOL)_validateAssetThreshold:(id)a0 error:(id *)a1;
- (void)dealloc;
- (BOOL)_validateContainerIdentifier:(id)a0 error:(id *)a1;
- (BOOL)validateOptions:(id)a0 andStoreOptions:(id)a1 error:(id *)a2;
- (BOOL)_validateContainerOptions:(id)a0 error:(id *)a1;
- (BOOL)_validateHistoryTrackingOptions:(id)a0 error:(id *)a1;
- (BOOL)_validateMemoryThreshold:(id)a0 error:(id *)a1;

@end
