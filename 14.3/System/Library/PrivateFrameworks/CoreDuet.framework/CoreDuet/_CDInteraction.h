@class NSArray, NSString, NSURL, NSDate, _CDContact;

@interface _CDInteraction : NSObject <_CDPDataPoint, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL userIsSender;
@property (readonly, nonatomic) NSDate *timestamp;
@property (readonly, nonatomic) NSArray *peopleIdentifiers;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) BOOL userIsThreadInitiator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL forcePersistInteraction;
@property (nonatomic) BOOL mailShareSheetDeletionCandidate;
@property (retain) NSDate *startDate;
@property (retain) NSDate *endDate;
@property (retain) NSString *uuid;
@property (retain) NSString *locationUUID;
@property long long mechanism;
@property long long direction;
@property BOOL isResponse;
@property (retain) NSString *bundleId;
@property (retain) NSString *targetBundleId;
@property (retain) NSString *groupName;
@property (retain) NSURL *contentURL;
@property (retain) NSString *derivedIntentIdentifier;
@property (retain) NSString *domainIdentifier;
@property (retain) NSString *account;
@property (retain) _CDContact *sender;
@property (retain) NSArray *recipients;
@property (retain) NSArray *keywords;
@property (retain) NSArray *attachments;

+ (id)shareSheetInteractionFromINInteraction:(id)a0 bundleID:(id)a1 knowledgeStore:(id)a2;
+ (id)recipientIdentifiersFromMobileMailConversationId:(id)a0;
+ (id)conversationIdForMobileMailInteractionRecipients:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)descriptionOfArray:(id)a0;
- (id)initWithINInteraction:(id)a0 bundleID:(id)a1;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
