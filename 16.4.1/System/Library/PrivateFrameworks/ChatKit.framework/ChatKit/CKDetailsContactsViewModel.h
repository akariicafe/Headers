@class NSString, CNContact, CKEntity;

@interface CKDetailsContactsViewModel : NSObject

@property (copy, nonatomic) NSString *preferredHandle;
@property (copy, nonatomic) NSString *entityName;
@property (retain, nonatomic) CKEntity *entity;
@property (copy, nonatomic) NSString *locationString;
@property (nonatomic) BOOL tuConversationStatusIsActive;
@property (nonatomic) long long callType;
@property (nonatomic) BOOL showsLocation;
@property (nonatomic) BOOL showsMessageButton;
@property (nonatomic) BOOL showsFaceTimeVideoButton;
@property (nonatomic) BOOL showsPhoneButton;
@property (nonatomic) BOOL showsScreenSharingButton;
@property (retain, nonatomic) CNContact *contact;
@property (nonatomic) BOOL isPendingRecipient;
@property (nonatomic) BOOL verified;
@property (nonatomic) BOOL showsTUConversationStatus;

+ (id)descriptorForContactRequiredKeys;

- (void).cxx_destruct;
- (id)initWithEntity:(id)a0 locationString:(id)a1 tuConversationStatusIsActive:(BOOL)a2 callType:(long long)a3 showsLocation:(BOOL)a4 showsMessageButton:(BOOL)a5 showsFaceTimeVideoButton:(BOOL)a6 showsPhoneButton:(BOOL)a7 showsScreenSharingButton:(BOOL)a8 contact:(id)a9 isPendingRecipient:(BOOL)a10 verified:(BOOL)a11 showsTUConversationStatus:(BOOL)a12;

@end
