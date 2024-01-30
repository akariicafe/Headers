@class NSString;

@interface RKResponseFeatures : NSObject

@property (readonly) NSString *response;
@property (readonly) int count;
@property (readonly) double numOfElapsedDays;
@property (readonly) double normalizedSourceAppCount;
@property (readonly) double normalizedSourceNotificationCount;
@property (readonly) double normalizedInputMethodCannedCount;
@property (readonly) double normalizedInputMethodScribbleCount;
@property (readonly) double normalizedInputMethodDictationCount;
@property (readonly) unsigned long long responseLength;
@property (readonly) int sameRecipientCount;

- (void).cxx_destruct;
- (id)initWithFeatures:(id)a0 count:(int)a1 numOfElapsedDays:(double)a2 sourceAppCount:(double)a3 sourceNotificationCount:(double)a4 inputSourceCannedCount:(double)a5 inputSourceScribbleCount:(double)a6 inputSourceDictationCount:(double)a7 responseLength:(unsigned long long)a8 sameRecipientCount:(int)a9;

@end
