@class NSString, EKParticipant;
@protocol EKIdentityProtocol;

@interface EKParticipantForSorting : NSObject <NSCopying>

@property (weak, nonatomic) EKParticipant *participant;
@property (weak, nonatomic) id<EKIdentityProtocol> identity;
@property (copy, nonatomic) NSString *firstName;
@property (copy, nonatomic) NSString *lastName;
@property (copy, nonatomic) NSString *cachedDisplayName;
@property (nonatomic) BOOL isEmail;
@property (nonatomic) BOOL isPhone;

+ (id)_sharedParticipantForSortingWithIdentity:(id)a0 participant:(id)a1 contactPredicate:(id)a2;
+ (id)participantForSortingWithEKParticipant:(id)a0;
+ (id)participantForSortingWithIdentity:(id)a0;

- (id)displayName;
- (long long)compare:(id)a0;
- (BOOL)participantIsOptional:(id)a0;
- (long long)compareByEmailThenByContactName:(id)a0;
- (long long)compareByContactNames:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
