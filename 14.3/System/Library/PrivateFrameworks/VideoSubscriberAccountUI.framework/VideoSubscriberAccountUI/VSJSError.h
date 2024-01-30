@class NSString;

@interface VSJSError : IKJSObject <VSJSError>

@property (nonatomic) unsigned long long code;
@property (copy, nonatomic) NSString *message;

- (id)init;
- (void).cxx_destruct;
- (id)error;
- (id)description;

@end
