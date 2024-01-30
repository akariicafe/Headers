@class NSString;

@interface MFMessageInfo : NSObject <MFBaseMessage, NSCopying> {
    unsigned char _flagged : 1;
    unsigned char _read : 1;
    unsigned char _deleted : 1;
    unsigned char _uidIsLibraryID : 1;
    unsigned char _hasAttachments : 1;
    unsigned char _isVIP : 1;
    unsigned char _isHighPriority : 1;
}

@property (readonly, nonatomic) unsigned int uid;
@property (readonly, nonatomic) unsigned int dateReceivedInterval;
@property (readonly, nonatomic) unsigned int dateSentInterval;
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
@property (readonly, nonatomic) long long generationNumber;
@property (nonatomic) long long uid;
@property (nonatomic) unsigned int dateReceivedInterval;
@property (nonatomic) unsigned int dateSentInterval;
@property (nonatomic) long long conversationHash;
@property (nonatomic) long long mailboxID;
@property (nonatomic) long long messageIDHash;
@property (nonatomic) BOOL flagged;
@property (nonatomic) BOOL read;
@property (nonatomic) BOOL deleted;
@property (nonatomic) BOOL uidIsLibraryID;
@property (nonatomic) BOOL isVIP;
@property (nonatomic, getter=isKnownToHaveAttachments) BOOL knownToHaveAttachments;
@property (nonatomic) long long sortUid;
@property (nonatomic) unsigned int sortDateReceivedInterval;

+ (long long)newGenerationNumber;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyMessageInfo;
- (BOOL)isEqual:(id)a0;
- (id)_flagDescription;
- (long long)generationCompare:(id)a0;
- (id)initWithUid:(long long)a0 mailboxID:(long long)a1 messageID:(long long)a2 dateReceivedInterval:(unsigned int)a3 dateSentInterval:(unsigned int)a4 conversationHash:(long long)a5 read:(BOOL)a6 knownToHaveAttachments:(BOOL)a7 flagged:(BOOL)a8 isVIP:(BOOL)a9;

@end
