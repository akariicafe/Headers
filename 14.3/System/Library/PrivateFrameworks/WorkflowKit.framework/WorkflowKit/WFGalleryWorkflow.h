@class NSDate, NSString, NSArray, CKRecordID, WFWorkflowIcon, WFWorkflowRecord, WFFileRepresentation, NSData, NSNumber;

@interface WFGalleryWorkflow : NSObject <WFCloudKitItem, WFSortableGalleryObject, NSMutableCopying>

@property (retain, nonatomic) NSNumber *iconColor;
@property (retain, nonatomic) NSNumber *iconGlyph;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *shortDescription;
@property (readonly, nonatomic) NSString *longDescription;
@property (readonly, nonatomic) WFWorkflowIcon *icon;
@property (readonly, nonatomic) WFWorkflowRecord *workflowRecord;
@property (readonly, nonatomic) NSNumber *searchable;
@property (readonly, nonatomic) long long minVersion;
@property (readonly, nonatomic) NSArray *hiddenRegions;
@property (readonly, nonatomic) NSDate *createdAt;
@property (readonly, nonatomic) NSDate *modifiedAt;
@property (readonly, nonatomic) NSString *language;
@property (readonly, nonatomic) CKRecordID *base;
@property (readonly, nonatomic) NSString *persistentIdentifier;
@property (readonly, nonatomic) WFFileRepresentation *shortcutFile;
@property (readonly, nonatomic) WFFileRepresentation *iconFile;
@property (readonly, nonatomic) CKRecordID *identifier;
@property (copy, nonatomic) NSData *recordSystemFieldsData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)properties;
+ (id)recordType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)sharingURL;
- (unsigned long long)referenceActionForKey:(id)a0;
- (void)setCreatedAt:(id)a0 modifiedAt:(id)a1 createdBy:(id)a2;
- (void)ensureFileAssets;
- (id)propertiesForEventLogging;

@end
