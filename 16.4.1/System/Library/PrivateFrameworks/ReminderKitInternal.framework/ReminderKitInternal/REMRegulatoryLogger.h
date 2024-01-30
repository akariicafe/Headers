@interface REMRegulatoryLogger : NSObject

@property (nonatomic) struct ct_green_tea_logger_s { } *greenTeaLogger;

+ (id)sharedLogger;
+ (void)attachmentAddedForType:(long long)a0;
+ (void)attachmentAddedForUTType:(id)a0;
+ (void)attachmentPushedToiCloudForType:(long long)a0;
+ (void)attachmentPushedToiCloudForUTType:(id)a0;
+ (long long)attachmentTypeFromUTType:(id)a0;

- (id)init;

@end
