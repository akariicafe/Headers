@class MFMailboxUid, NSString, NSURL, MFMessageInfo;

@interface MFMailMessage : MFMessage <MFBaseMessage, EFPubliclyDescribable> {
    unsigned long long _messageFlags;
    unsigned long long _modSequenceNumber;
    MFMessageInfo *_info;
    NSURL *_globalMessageURL;
}

@property (readonly, nonatomic) unsigned int uid;
@property (readonly, nonatomic) unsigned int dateReceivedInterval;
@property (readonly, nonatomic) unsigned int dateSentInterval;
@property (readonly, nonatomic) long long conversationHash;
@property (readonly, nonatomic) unsigned int mailboxID;
@property (readonly, nonatomic) long long messageIDHash;
@property (readonly, nonatomic) BOOL flagged;
@property (readonly, nonatomic) BOOL read;
@property (readonly, nonatomic) BOOL deleted;
@property (readonly, nonatomic) BOOL senderVIP;
@property (readonly, nonatomic, getter=isKnownToHaveAttachments) BOOL knownToHaveAttachments;
@property (readonly, nonatomic, getter=isLibraryMessage) BOOL libraryMessage;
@property (readonly, nonatomic) unsigned int libraryID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) MFMailboxUid *mailbox;
@property unsigned long long modSequenceNumber;
@property (nonatomic) BOOL shouldUseMailDrop;
@property (nonatomic) unsigned long long messageFlags;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)externalDataTypeIdentifiers;
+ (unsigned int)validatePriority:(int)a0;
+ (id)forwardedMessagePrefixWithSpacer:(BOOL)a0;
+ (Class)dataMessageStoreToUse;
+ (unsigned int)displayablePriorityForPriority:(int)a0;

- (id)messageStore;
- (BOOL)junk;
- (id)account;
- (unsigned long long)numberOfAttachments;
- (BOOL)answered;
- (id)from;
- (int)priority;
- (id)URL;
- (void)setSummary:(id)a0;
- (void)dealloc;
- (id)_privacySafeDescription;
- (unsigned long long)conversationFlags;
- (BOOL)isSearchResultWithBogusRemoteId;
- (id)loadMeetingData;
- (void)setMessageFlagsWithoutCommitting:(unsigned long long)a0;
- (id)originalMailboxURL;
- (id)copyMessageInfo;
- (void)loadCachedHeaderValuesFromHeaders:(id)a0;
- (id)bestAlternativePart:(BOOL *)a0;
- (id)listUnsubscribe;
- (void)setMutableInfoFromMessage:(id)a0;
- (void)markAsViewed;
- (void)markAsNotViewed;
- (void)markAsFlagged;
- (void)markAsNotFlagged;
- (void)markAsReplied;
- (void)markAsForwarded;
- (void)setConversationFlags:(unsigned long long)a0;
- (id)globalMessageURL;
- (void)setPriorityFromHeaders:(id)a0;
- (id)mailMessageStore;
- (long long)conversationHash;
- (id)loadMeetingExternalID;
- (id)loadMeetingMetadata;
- (id)remoteMailboxURL;
- (BOOL)shouldSetSummary;
- (id)externalConversationID;
- (id)bestAlternativePart;
- (BOOL)conversationVIP;
- (BOOL)conversationMuted;

@end
