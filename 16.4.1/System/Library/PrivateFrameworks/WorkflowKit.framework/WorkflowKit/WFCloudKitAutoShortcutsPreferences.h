@class NSString, NSSet, INAppDescriptor, WFFileRepresentation, CKRecordID, NSData;

@interface WFCloudKitAutoShortcutsPreferences : NSObject <WFCloudKitItem>

@property (retain, nonatomic) INAppDescriptor *appDescriptor;
@property (retain, nonatomic) WFFileRepresentation *appDescriptorFileRepresentation;
@property (retain, nonatomic) NSString *appName;
@property (nonatomic) BOOL isSiriEnabled;
@property (nonatomic) BOOL isSpotlightEnabled;
@property (retain, nonatomic) NSSet *disabledAutoShortcuts;
@property (retain, nonatomic) WFFileRepresentation *disabledAutoShortcutsFileRepresentation;
@property (readonly, nonatomic) CKRecordID *identifier;
@property (copy, nonatomic) NSData *recordSystemFieldsData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)properties;
+ (id)recordType;
+ (id)identifierForRecordID:(id)a0;
+ (BOOL)isAutoShortcutsPreferencesRecordID:(id)a0;
+ (id)recordIDWithZoneID:(id)a0 identifier:(id)a1;

- (void).cxx_destruct;
- (id)fileRepresentations;
- (id)initWithAutoShortcutsPreferences:(id)a0 identifier:(id)a1;
- (id)dataFromObject:(id)a0 error:(id *)a1;
- (id)fileRepresentationFromObject:(id)a0;

@end
