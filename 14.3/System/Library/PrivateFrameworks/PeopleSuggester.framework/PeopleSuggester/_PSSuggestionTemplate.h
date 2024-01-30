@class NSString, NSArray, NSDictionary, INImage;

@interface _PSSuggestionTemplate : NSObject

@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSString *interactionRecipients;
@property (readonly, nonatomic) INImage *image;
@property (readonly, nonatomic) NSString *groupName;
@property (readonly, nonatomic) NSArray *recipientContactIDs;
@property (readonly, nonatomic) NSArray *recipientEmailAddresses;
@property (readonly, nonatomic) NSArray *recipientPhoneNumbers;
@property (readonly, nonatomic) NSArray *recipientDisplayNames;
@property (readonly, nonatomic) NSDictionary *contactIdToHandleMapping;
@property (readonly, nonatomic) NSDictionary *handleToDisplayNameMapping;
@property (readonly, nonatomic) NSString *reason;
@property (readonly, nonatomic) NSString *reasonType;

- (void).cxx_destruct;
- (id)initWithBundleID:(id)a0 interactionRecipients:(id)a1 image:(id)a2 groupName:(id)a3 recipientContactIDs:(id)a4 recipientEmailAddresses:(id)a5 recipientPhoneNumbers:(id)a6 recipientDisplayNames:(id)a7 contactIdToHandleMapping:(id)a8 handleToDisplayNameMapping:(id)a9 reason:(id)a10 reasonType:(id)a11;
- (id)initWithBundleID:(id)a0 interactionRecipients:(id)a1 image:(id)a2 groupName:(id)a3 recipientContactIDs:(id)a4 recipientEmailAddresses:(id)a5 recipientPhoneNumbers:(id)a6 recipientDisplayNames:(id)a7 contactIdToHandleMapping:(id)a8 reason:(id)a9 reasonType:(id)a10;
- (id)suggestionWithContactIDMapping:(id)a0 phoneMapping:(id)a1 emailMapping:(id)a2 contactStore:(id)a3 contactKeysToFetch:(id)a4;
- (id)description;

@end
