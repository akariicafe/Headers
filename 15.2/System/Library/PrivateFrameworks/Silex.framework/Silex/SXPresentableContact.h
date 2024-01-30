@class NSString;

@interface SXPresentableContact : NSObject

@property (readonly, nonatomic) NSString *email;
@property (readonly, nonatomic) NSString *phoneNumber;

- (id)initWithPhoneNumber:(id)a0;
- (id)initWithEmail:(id)a0;
- (void).cxx_destruct;

@end
