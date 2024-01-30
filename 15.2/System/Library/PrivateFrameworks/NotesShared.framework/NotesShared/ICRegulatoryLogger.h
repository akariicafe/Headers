@interface ICRegulatoryLogger : NSObject

@property (nonatomic) struct ct_green_tea_logger_s { } *greenTeaLogger;

- (id)init;
- (void)dealloc;
- (void)didAddAttachment:(id)a0;
- (void)didPushAttachmentToiCloud:(id)a0;

@end
