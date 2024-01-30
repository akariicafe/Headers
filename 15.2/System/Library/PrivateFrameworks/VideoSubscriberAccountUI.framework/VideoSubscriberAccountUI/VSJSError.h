@class NSString;

@interface VSJSError : IKJSObject <VSJSError>

@property (nonatomic) unsigned long long code;
@property (copy, nonatomic) NSString *message;

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)error;

@end
