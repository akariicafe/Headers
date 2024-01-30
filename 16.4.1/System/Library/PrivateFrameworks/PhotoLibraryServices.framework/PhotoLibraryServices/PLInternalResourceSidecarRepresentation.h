@class NSManagedObjectID, NSString, PLInternalResource, NSURL, NSDate, NSNumber, PLManagedAsset;

@interface PLInternalResourceSidecarRepresentation : NSObject <PLSidecar>

@property (weak, nonatomic) PLInternalResource *resource;
@property (readonly, nonatomic) NSString *originalFilename;
@property (readonly, nonatomic) NSNumber *index;
@property (readonly, nonatomic) NSDate *captureDate;
@property (readonly, nonatomic) NSDate *modificationDate;
@property (readonly, nonatomic) NSString *filename;
@property (readonly, nonatomic) NSString *uniformTypeIdentifier;
@property (readonly, nonatomic) NSNumber *compressedSize;
@property (readonly, nonatomic) PLManagedAsset *asset;
@property (readonly, nonatomic) short indexValue;
@property (readonly, nonatomic) unsigned long long compressedSizeValue;
@property (readonly, nonatomic) NSURL *fileURL;
@property (nonatomic) long long ptpTrashedState;
@property (readonly, nonatomic) NSManagedObjectID *objectID;
@property (readonly, nonatomic) unsigned int resourceType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
