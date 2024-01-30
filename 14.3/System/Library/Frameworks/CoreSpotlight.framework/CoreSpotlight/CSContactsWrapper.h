@class NSString;

@interface CSContactsWrapper : NSObject

@property (readonly, nonatomic) Class CNContactPropertyClass;
@property (readonly, nonatomic) NSString *CNContactEmailAddressesKeyString;

+ (id)sharedInstance;

@end
