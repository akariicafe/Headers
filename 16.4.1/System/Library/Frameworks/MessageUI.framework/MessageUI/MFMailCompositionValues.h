@class NSData, NSString, NSArray, NSURL, NSDate, NSMutableArray, CKContainerSetupInfo, CKShare;

@interface MFMailCompositionValues : NSObject <NSSecureCoding, MFMailCompositionValuesProtocol, MFMailCompositionAdditionalDonating, MFMailCompositionShareSheetRecipients>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long composeType;
@property (retain, nonatomic) NSURL *mailtoURL;
@property (copy, nonatomic) NSString *autosaveIdentifier;
@property (copy, nonatomic) NSData *serializedMessageObjectID;
@property (copy, nonatomic) NSData *serializedMailboxObjectID;
@property (copy, nonatomic) NSString *preferredSendingEmailAddress;
@property (copy, nonatomic) NSString *subject;
@property (copy, nonatomic) NSString *hideMyEmailFrom;
@property (copy, nonatomic) NSString *from;
@property (copy, nonatomic) NSArray *toRecipients;
@property (copy, nonatomic) NSArray *ccRecipients;
@property (copy, nonatomic) NSArray *bccRecipients;
@property (copy, nonatomic) NSString *messageBody;
@property (nonatomic) BOOL isHTML;
@property (retain, nonatomic) NSArray *originalContent;
@property (nonatomic) BOOL includeAttachments;
@property (nonatomic) int sourceAccountManagement;
@property (nonatomic) BOOL isUsingDefaultAccount;
@property (nonatomic) BOOL showKeyboardImmediately;
@property (nonatomic) BOOL showContentImmediately;
@property (nonatomic) BOOL prefersFirstLineSelection;
@property (nonatomic) unsigned long long caretPosition;
@property (copy, nonatomic) NSMutableArray *contentVariations;
@property (nonatomic) long long defaultContentVariationIndex;
@property (retain, nonatomic) NSMutableArray *deferredAttachments;
@property (copy, nonatomic) NSDate *sendLaterDate;
@property (nonatomic) unsigned long long sendLaterContext;
@property (copy, nonatomic) CKShare *ckShare;
@property (copy, nonatomic) CKContainerSetupInfo *ckContainerSetupInfo;
@property (nonatomic) long long ckSharePermissionType;
@property (nonatomic) BOOL ckShareAllowOthersToInvite;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSArray *UTITypes;
@property (copy, nonatomic) NSArray *photoIDs;
@property (copy, nonatomic) NSArray *cloudPhotoIDs;
@property (copy, nonatomic) NSArray *contentText;
@property (copy, nonatomic) NSArray *contentURLs;
@property (copy, nonatomic) NSString *shareSheetSessionID;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_processDictionaryRepresentation:(id)a0;
- (id)addContentVariationWithName:(id)a0;

@end
