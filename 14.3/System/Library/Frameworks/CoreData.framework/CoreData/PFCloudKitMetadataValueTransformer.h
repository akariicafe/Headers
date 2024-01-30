@class NSArray;

@interface PFCloudKitMetadataValueTransformer : NSSecureUnarchiveFromDataTransformer

@property (class, readonly, copy) NSArray *allowedTopLevelClasses;

@end
