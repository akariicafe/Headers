@class TUHandle, NSString, NSArray, NSSet, NSDate;

@interface TUConversationMember : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *idsFromID;
@property (readonly, copy, nonatomic) NSString *idsDestination;
@property (copy, nonatomic) NSString *nickname;
@property (nonatomic) BOOL joinedFromLetMeIn;
@property (nonatomic) BOOL isOtherInvitedHandle;
@property (readonly, copy, nonatomic) NSArray *idsDestinations;
@property (readonly, nonatomic) TUHandle *handle;
@property (nonatomic) BOOL isSplitSessionMember;
@property (nonatomic) BOOL isLightweightMember;
@property (nonatomic) NSDate *dateReceivedLetMeIn;
@property (copy, nonatomic) TUHandle *splitSessionPrimary;
@property (copy, nonatomic) TUHandle *lightweightPrimary;
@property (nonatomic) unsigned long long lightweightPrimaryParticipantIdentifier;
@property (readonly, copy, nonatomic) NSSet *handles;

- (id)initWithContact:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithHandle:(id)a0;
- (id)description;
- (id)initWithDestinations:(id)a0;
- (id)initWithHandles:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithDestination:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithHandle:(id)a0 nickname:(id)a1 joinedFromLetMeIn:(BOOL)a2;
- (id)initWithContact:(id)a0 additionalHandles:(id)a1;
- (BOOL)isEqualToMember:(id)a0;
- (id)initWithHandle:(id)a0 nickname:(id)a1;
- (BOOL)representsSameMemberAs:(id)a0;

@end
