@class NSURL;

@interface MFMessageLibrarySetContentProtectionForAttachmentsUpgradeStep : NSObject

@property (readonly, nonatomic) NSURL *baseAttachmentsDirectory;

+ (id)log;

- (void).cxx_destruct;
- (id)initWithBaseAttachmentsDirectory:(id)a0;
- (BOOL)performMigrationStep;

@end
