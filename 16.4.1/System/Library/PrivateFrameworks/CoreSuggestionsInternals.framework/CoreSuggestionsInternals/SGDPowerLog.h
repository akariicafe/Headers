@interface SGDPowerLog : NSObject

+ (void)pluginEndSetup:(id)a0;
+ (void)endDissectionOfMessage:(id)a0 inContext:(unsigned long long)a1;
+ (void)endIngestOfMessages:(unsigned long long)a0;
+ (void)logPrewarmWithLastPrewarmTime:(double)a0;
+ (void)pluginEndDeletion:(id)a0;
+ (void)pluginEndProcessingSearchableItem:(id)a0;
+ (void)pluginStartDeletion:(id)a0;
+ (void)pluginStartProcessingSearchableItem:(id)a0;
+ (void)pluginStartSetup:(id)a0;
+ (void)startDissectionOfMessage:(id)a0 inContext:(unsigned long long)a1;
+ (void)startIngestOfMessages:(unsigned long long)a0;

@end
