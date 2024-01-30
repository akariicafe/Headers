@class NSData;

@interface MCSessionPeerConnectionData : NSObject

@property (retain, nonatomic) NSData *gckSessionConnectionData;
@property (nonatomic) long long encryptionPreference;
@property (nonatomic) BOOL hasIdentitySet;

+ (id)connectionDataSegmentWithEncryptionPreference:(long long)a0 identitySet:(BOOL)a1 gckSessionConnectionDataBytes:(void *)a2 gckSessionConnectionDataLength:(unsigned long long)a3;

- (void)dealloc;
- (BOOL)parseConnectionDataBlob:(id)a0;
- (void)parseConnectionDataSegmentWithBytes:(char *)a0 withLength:(unsigned long long)a1;
- (id)initWithConnectionDataBlob:(id)a0;

@end
