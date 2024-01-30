@interface PKRecognitionSessionCache : NSObject

+ (id)recognitionSessionForUUID:(id)a0;
+ (void)addRecognitionSession:(id)a0 forUUID:(id)a1;
+ (void)cleanupSessionsIfNecessary;
+ (id)_recognitionSessions;

@end
