@class NSString;

@interface NMGenericMessageLogAction : NMLogAction {
    NSString *_message;
}

+ (id)logActionWithMessage:(id)a0;

- (id)initWithMessage:(id)a0;
- (id)logMessage;
- (void).cxx_destruct;

@end
