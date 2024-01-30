@class NSString, NSArray;

@interface _DECFeedbackLoggerManager : NSObject <_DECFeedbackLogger> {
    NSArray *_loggers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

@end
