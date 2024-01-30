@class NSManagedObjectModel, NSString;

@interface PFCloudKitModelValidator : NSObject {
    NSManagedObjectModel *_model;
    NSString *_configurationName;
}

@property (nonatomic) BOOL skipValueTransformerValidation;
@property (nonatomic) BOOL validateLegacyMetadataAttributes;

+ (id)stringFromDeleteRule:(unsigned long long)a0;
+ (BOOL)enforceUniqueConstraintChecks;

- (BOOL)validateEntities:(id)a0 error:(id *)a1;
- (id)init;
- (void)dealloc;
- (id)initWithManagedObjectModel:(id)a0 configuration:(id)a1;
- (BOOL)_validateManagedObjectModel:(id)a0 error:(id *)a1;
- (BOOL)validate:(id *)a0;
- (BOOL)validateEntity:(id)a0 hasAttributeNamed:(id)a1 ofType:(unsigned long long)a2 andReturnFailureReason:(id *)a3;

@end
