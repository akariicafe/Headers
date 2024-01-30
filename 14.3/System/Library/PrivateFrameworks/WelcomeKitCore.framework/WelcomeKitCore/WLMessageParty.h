@class NSString;

@interface WLMessageParty : NSObject

@property (readonly, nonatomic) BOOL isPhoneNumber;
@property (readonly, nonatomic) NSString *address;
@property (readonly, nonatomic) NSString *icc;
@property (readonly, nonatomic) NSString *np;
@property (readonly, nonatomic) NSString *ccAcNumber;

+ (id)_guessIccForNumber:(id)a0;

- (void).cxx_destruct;
- (id)description;
- (id)_initWithAddress:(id)a0 addCountryCode:(BOOL)a1 sqlController:(id)a2;

@end
