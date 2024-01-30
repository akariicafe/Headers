@class NSCloudKitMirroringDelegateOptions, CKRecordZone, CKDatabase;

@interface PFCloudKitExporterOptions : NSObject

@property (readonly, nonatomic) CKRecordZone *recordZone;
@property (readonly, nonatomic) CKDatabase *database;
@property (readonly, nonatomic) NSCloudKitMirroringDelegateOptions *mirroringDelegateOptions;
@property (nonatomic) unsigned long long perOperationBytesThreshold;
@property (nonatomic) unsigned long long perOperationObjectThreshold;

- (void)dealloc;
- (id)copy;
- (id)initWithZone:(id)a0 database:(id)a1 options:(id)a2;

@end
