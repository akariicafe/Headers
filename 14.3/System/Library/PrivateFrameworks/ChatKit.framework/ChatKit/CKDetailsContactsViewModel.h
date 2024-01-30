@class NSString, CNContact;

@interface CKDetailsContactsViewModel : NSObject

@property (copy, nonatomic) NSString *preferredHandle;
@property (copy, nonatomic) NSString *entityName;
@property (copy, nonatomic) NSString *locationString;
@property (nonatomic) BOOL showsLocation;
@property (nonatomic) BOOL showsMessageButton;
@property (nonatomic) BOOL showsFaceTimeVideoButton;
@property (nonatomic) BOOL showsPhoneButton;
@property (nonatomic) BOOL showsScreenSharingButton;
@property (retain, nonatomic) CNContact *contact;
@property (nonatomic) BOOL isPendingRecipient;
@property (nonatomic) BOOL verified;

+ (id)descriptorForContactRequiredKeys;

- (id)initWithPreferredHandle:(id)a0 entityName:(id)a1 locationString:(id)a2 showsLocation:(BOOL)a3 showsMessageButton:(BOOL)a4 showsFaceTimeVideoButton:(BOOL)a5 showsPhoneButton:(BOOL)a6 showsScreenSharingButton:(BOOL)a7 contact:(id)a8 isPendingRecipient:(BOOL)a9 verified:(BOOL)a10;
- (void).cxx_destruct;

@end
