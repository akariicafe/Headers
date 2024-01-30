@class CKServerChangeToken, NSDate;

@interface BRCServerChangeState : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSDate *lastSyncDownDate;
@property (nonatomic) long long lastSyncDownStatus;
@property (retain, nonatomic) CKServerChangeToken *changeToken;
@property (nonatomic) unsigned long long clientRequestID;
@property (readonly, nonatomic) BOOL hasNeverSyncedDown;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)descriptionWithContext:(id)a0;
- (BOOL)updateWithServerChangeToken:(id)a0 clientRequestID:(unsigned long long)a1 syncDownStatus:(long long)a2;
- (void)forgetChangeTokens;
- (void)forgetClientRequestID;
- (id)initWithServerSyncState:(id)a0;

@end
