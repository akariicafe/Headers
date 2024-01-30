@interface ATXMFeedbackConversionLogger : NSObject

+ (void)logUserInteractionFeedbackWithEngagementType:(int)a0 consumerSubType:(unsigned char)a1 tracker:(id)a2;
+ (void)logRecordedFeedbackWithEngagementType:(int)a0 consumerSubType:(unsigned char)a1 tracker:(id)a2;

@end
