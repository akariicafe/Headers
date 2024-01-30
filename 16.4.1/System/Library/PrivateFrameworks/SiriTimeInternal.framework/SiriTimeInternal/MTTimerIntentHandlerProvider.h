@interface MTTimerIntentHandlerProvider : NSObject

+ (id)createTimerIntentHandler;
+ (id)deleteTimerIntentHandler;
+ (id)pauseResumeTimerIntentHandler;
+ (id)resetTimerIntentHandler;
+ (id)searchTimerIntentHandler;
+ (id)setTimerAttributeIntentHandler;

@end
