@class NSString, NSMutableDictionary;

@interface CPSession : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableDictionary *members;
@property (retain, nonatomic) NSString *createdByAccountID;
@property (readonly, retain, nonatomic) NSString *sessionID;
@property (readonly, nonatomic) NSString *receivedFromAccountID;

+ (id)memberStateToString:(unsigned char)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)invitedIDSMembersExcludingSelf:(id)a0;
- (id)_idsMembersExcludingSelf:(id)a0 withState:(unsigned char)a1;
- (id)acceptedIDSMembersExcludingSelf:(id)a0;
- (id)initWithSessionID:(id)a0 createdBy:(id)a1 memberState:(id)a2 receivedFrom:(id)a3;
- (id)initWithSessionID:(id)a0 createdByAccountID:(id)a1;
- (id)initWithSessionID:(id)a0 createdByAccountID:(id)a1 receivedFromAccountID:(id)a2;
- (void)setMember:(id)a0 state:(unsigned char)a1;

@end
