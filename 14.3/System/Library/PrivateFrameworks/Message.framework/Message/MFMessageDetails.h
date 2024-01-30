@class NSString, MFMessageLibrary, MFMailboxUid;

@interface MFMessageDetails : NSObject <MFBaseMessage> {
    MFMessageLibrary *library;
}

@property (readonly, nonatomic) unsigned int uid;
@property (readonly, nonatomic) unsigned long long messageFlags;
@property (readonly, weak, nonatomic) MFMailboxUid *mailbox;
@property (readonly, nonatomic) unsigned int dateReceivedInterval;
@property (readonly, nonatomic) unsigned int dateSentInterval;
@property (readonly, nonatomic) NSString *externalID;
@property (readonly, nonatomic) long long conversationHash;
@property (readonly, nonatomic) long long mailboxID;
@property (readonly, nonatomic) long long messageIDHash;
@property (readonly, nonatomic) BOOL flagged;
@property (readonly, nonatomic) BOOL read;
@property (readonly, nonatomic) BOOL deleted;
@property (readonly, nonatomic) BOOL senderVIP;
@property (readonly, nonatomic, getter=isKnownToHaveAttachments) BOOL knownToHaveAttachments;
@property (readonly, nonatomic, getter=isLibraryMessage) BOOL libraryMessage;
@property (readonly, nonatomic) long long libraryID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyMessageInfo;
- (BOOL)isEqual:(id)a0;
- (id)remoteID;
- (id)messageID;

@end
