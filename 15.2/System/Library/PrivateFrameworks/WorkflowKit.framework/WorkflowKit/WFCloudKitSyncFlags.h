@class NSData, CKRecordID, NSString;

@interface WFCloudKitSyncFlags : NSObject <WFCloudKitItem>

@property (nonatomic) BOOL migratedVoiceShortcuts;
@property (nonatomic) long long defaultShortcutsVersion;
@property (readonly, nonatomic) CKRecordID *identifier;
@property (copy, nonatomic) NSData *recordSystemFieldsData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)recordIDWithZoneID:(id)a0;
+ (id)properties;
+ (id)recordType;
+ (BOOL)isCloudKitSyncFlagsRecordID:(id)a0;

- (id)initWithZoneID:(id)a0;
- (void).cxx_destruct;

@end
