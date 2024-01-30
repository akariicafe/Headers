@class NSMutableSet;

@interface PFUbiquityEventLogging : NSObject {
    NSMutableSet *_logEvents;
    long long _logLevel;
}

+ (void)initialize;

- (id)init;
- (void)dealloc;

@end
