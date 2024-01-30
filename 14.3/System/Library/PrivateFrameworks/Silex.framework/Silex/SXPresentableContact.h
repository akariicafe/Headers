@class NSString;

@interface SXPresentableContact : NSObject

@property (readonly, nonatomic) NSString *email;
@property (readonly, nonatomic) NSString *phoneNumber;

- (void).cxx_destruct;
- (id)initWithPhoneNumber:(id)a0;
- (id)initWithEmail:(id)a0;

@end
