@interface ICRegulatoryLogger : NSObject

@property (nonatomic) struct ct_green_tea_logger_s { } *greenTeaLogger;

- (void)dealloc;
- (id)init;
- (void)didAddAttachment:(id)a0;
- (void)didPushAttachmentToiCloud:(id)a0;

@end
