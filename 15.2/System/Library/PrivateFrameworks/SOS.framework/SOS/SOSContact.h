@class NSString;

@interface SOSContact : NSObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *phoneNumber;
@property (copy, nonatomic) NSString *nameContactIdentifier;
@property (copy, nonatomic) NSString *phoneNumberContactIdentifier;

- (void).cxx_destruct;

@end
