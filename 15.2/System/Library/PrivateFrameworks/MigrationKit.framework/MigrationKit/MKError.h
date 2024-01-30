@class NSString;

@interface MKError : NSError

@property (copy, nonatomic) NSString *message;

- (void).cxx_destruct;
- (id)initWithDomain:(id)a0 code:(long long)a1 message:(id)a2;

@end
