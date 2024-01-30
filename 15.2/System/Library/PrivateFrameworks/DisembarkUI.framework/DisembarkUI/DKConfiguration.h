@interface DKConfiguration : NSObject

@property (nonatomic) BOOL allowNonInteractiveCloudUpload;
@property (nonatomic) BOOL upsellTradeIn;
@property (nonatomic) BOOL postFollowUp;
@property (nonatomic) BOOL skipBackup;
@property (nonatomic) BOOL preventOpeningSafari;

+ (id)defaultConfiguration;
+ (id)setupAssistantConfiguration;

- (id)init;

@end
