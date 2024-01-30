@interface MFIMAPMessage : MFMailMessage <MFIMAPMessage> {
    unsigned long long _size;
    unsigned int _uid;
    unsigned long long _uniqueRemoteId;
}

@property (nonatomic) unsigned long long uniqueRemoteId;
@property (nonatomic) BOOL isPartial;
@property (nonatomic) BOOL hasTemporaryUid;
@property (nonatomic) unsigned int uid;

- (unsigned long long)messageSize;
- (id)messageID;
- (id)_privacySafeDescription;
- (long long)compareByNumberWithMessage:(id)a0;
- (id)initWithFlags:(unsigned long long)a0 size:(unsigned long long)a1 uid:(unsigned int)a2;
- (BOOL)isMessageContentsLocallyAvailable;
- (id)originalMailboxURL;
- (id)remoteID;
- (id)remoteMailboxURL;
- (void)setPreferredEncoding:(unsigned int)a0;

@end
