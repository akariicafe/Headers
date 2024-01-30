@class NSString, NSMutableArray, CNComposeRecipient;

@interface PXInvitationRecipient : NSObject <PLSInvitationRecipient> {
    CNComposeRecipient *_recipient;
    NSString *_firstName;
    NSString *_lastName;
}

@property (readonly, copy, nonatomic) NSString *firstName;
@property (readonly, copy, nonatomic) NSString *lastName;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSMutableArray *allEmails;
@property (readonly, nonatomic) NSMutableArray *allPhones;
@property (readonly, copy, nonatomic) NSString *selectedPhoneString;
@property (readonly, copy, nonatomic) NSString *selectedEmailString;
@property (readonly, copy, nonatomic) NSString *invalidAddressString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_validEmailAddressFromComposeRecipient:(id)a0;
+ (id)_validPhoneNumberFromString:(id)a0;

@end
