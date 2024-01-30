@class NSDate, NSString, CKRecordID, NSArray, WFWorkflowIcon, WFWorkflowRecord, WFFileRepresentation, NSNumber;

@interface WFMutableGalleryWorkflow : WFGalleryWorkflow

@property (copy, nonatomic) CKRecordID *identifier;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *shortDescription;
@property (copy, nonatomic) NSString *longDescription;
@property (retain, nonatomic) WFWorkflowIcon *icon;
@property (retain, nonatomic) WFWorkflowRecord *workflowRecord;
@property (retain, nonatomic) NSNumber *searchable;
@property (nonatomic) long long minVersion;
@property (copy, nonatomic) NSArray *hiddenRegions;
@property (copy, nonatomic) NSArray *supportedIdioms;
@property (retain, nonatomic) NSDate *createdAt;
@property (retain, nonatomic) NSDate *modifiedAt;
@property (copy, nonatomic) NSString *language;
@property (retain, nonatomic) CKRecordID *base;
@property (copy, nonatomic) NSString *persistentIdentifier;
@property (retain, nonatomic) WFFileRepresentation *shortcutFile;
@property (retain, nonatomic) WFFileRepresentation *iconFile;

- (void).cxx_destruct;
- (void)setIcon:(id)a0;

@end
