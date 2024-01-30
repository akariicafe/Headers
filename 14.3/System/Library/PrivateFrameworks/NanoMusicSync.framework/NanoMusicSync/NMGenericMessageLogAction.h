@class NSString;

@interface NMGenericMessageLogAction : NMLogAction {
    NSString *_message;
}

+ (id)logActionWithMessage:(id)a0;

- (void).cxx_destruct;
- (id)logMessage;
- (id)initWithMessage:(id)a0;

@end
