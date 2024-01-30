@class NSData, NSString, NSNumber;

@interface FTRejectMessage : FTFaceTimeMessage <NSCopying>

@property (copy) NSData *peerPushToken;
@property (copy) NSData *selfPushToken;
@property (copy) NSString *peerID;
@property (copy) NSNumber *reason;

- (id)requiredKeys;
- (id)messageBody;
- (id)bagKey;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
