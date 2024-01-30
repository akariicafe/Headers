@class NSString;

@interface VSJSAppError : VSJSObject <VSJSAppError>

@property (nonatomic) unsigned long long code;
@property (copy, nonatomic) NSString *message;

- (void).cxx_destruct;

@end
