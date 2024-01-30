@interface CKContactsSupport : NSObject

@property (readonly, nonatomic) Class CKCNContactStore;
@property (readonly, nonatomic) Class CKCNContactFetchRequest;
@property (readonly, nonatomic) Class CKCNPhoneNumber;
@property (readonly, nonatomic) Class CKCNContact;
@property (readonly, nonatomic) Class CKCNMutableContact;

+ (id)sharedInstance;

@end
