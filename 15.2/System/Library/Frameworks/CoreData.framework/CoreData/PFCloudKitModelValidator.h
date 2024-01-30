@class NSManagedObjectModel, NSString, NSCloudKitMirroringDelegateOptions;

@interface PFCloudKitModelValidator : NSObject {
    NSManagedObjectModel *_model;
    NSString *_configurationName;
    BOOL _skipValueTransformerValidation;
    BOOL _validateLegacyMetadataAttributes;
    NSCloudKitMirroringDelegateOptions *_options;
}

- (id)initWithManagedObjectModel:(id)a0 configuration:(id)a1 mirroringDelegateOptions:(id)a2;
- (id)init;
- (void)dealloc;

@end
