@class NSString;

@interface VSJSError : IKJSObject <VSJSError>

@property (nonatomic) unsigned long long code;
@property (copy, nonatomic) NSString *message;

- (id)error;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
