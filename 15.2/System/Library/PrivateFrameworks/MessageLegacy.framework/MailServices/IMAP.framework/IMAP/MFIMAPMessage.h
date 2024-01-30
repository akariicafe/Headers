@class NSArray;

@interface MFIMAPMessage : MFMailMessage {
    unsigned long long _size;
    NSArray *_customFlags;
    unsigned int _uid;
    unsigned long long _uniqueRemoteId;
}

- (void)setUid:(unsigned int)a0;
- (unsigned int)uid;
- (unsigned long long)messageSize;
- (id)remoteID;
- (id)messageID;
- (void)dealloc;
- (BOOL)isPartial;
- (id)_privacySafeDescription;
- (void)setPreferredEncoding:(unsigned int)a0;
- (BOOL)hasTemporaryUid;
- (id)originalMailboxURL;
- (unsigned long long)uniqueRemoteId;
- (void)setUniqueRemoteId:(unsigned long long)a0;
- (void)setIsPartial:(BOOL)a0;
- (BOOL)isMessageContentsLocallyAvailable;
- (void)setHasTemporaryUid:(BOOL)a0;
- (id)mailboxName;
- (id)remoteMailboxURL;
- (id)initWithFlags:(unsigned long long)a0 customFlags:(id)a1 size:(unsigned long long)a2 uid:(unsigned int)a3;
- (long long)compareByNumberWithMessage:(id)a0;
- (id)customFlags;

@end
