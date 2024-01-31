@interface CKContactsSupport : NSObject

@property (readonly, nonatomic) Class CKCNPhoneNumber;
@property (readonly, nonatomic) Class CKCNContact;

+ (id)sharedInstance;

@end
