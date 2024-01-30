@interface ATXMFeedbackConversionLogger : NSObject

+ (void)logRecordedFeedbackWithEngagementType:(int)a0 consumerSubType:(unsigned char)a1 tracker:(id)a2;
+ (void)logUserInteractionFeedbackWithEngagementType:(int)a0 consumerSubType:(unsigned char)a1 tracker:(id)a2;

@end
