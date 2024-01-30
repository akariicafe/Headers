@class TUConversationActivityMetadata, NSUUID, NSString, NSData, CKShare;

@interface TUConversationActivityCreateSessionRequest : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSUUID *UUID;
@property (copy, nonatomic) NSString *activityIdentifier;
@property (copy, nonatomic) NSData *applicationContext;
@property (retain, nonatomic) TUConversationActivityMetadata *metadata;
@property (copy, nonatomic) CKShare *share;
@property (nonatomic, getter=isStaticActivity) BOOL staticActivity;

- (void)encodeWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithMetadata:(id)a0 applicationContext:(id)a1 activityIdentifier:(id)a2 uuid:(id)a3;
- (id)initWithMetadata:(id)a0 applicationContext:(id)a1 activityIdentifier:(id)a2 uuid:(id)a3 staticActivity:(BOOL)a4;
- (BOOL)isEqualToConversationActivitySessionCreationRequest:(id)a0;

@end
