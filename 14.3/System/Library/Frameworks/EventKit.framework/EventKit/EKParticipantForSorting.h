@class NSString, EKParticipant;

@interface EKParticipantForSorting : NSObject <NSCopying>

@property (weak, nonatomic) EKParticipant *participant;
@property (copy, nonatomic) NSString *firstName;
@property (copy, nonatomic) NSString *lastName;
@property (copy, nonatomic) NSString *cachedDisplayName;
@property (nonatomic) BOOL isEmail;
@property (nonatomic) BOOL isPhone;

+ (id)participantForSortingWithEKParticipant:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)compare:(id)a0;
- (id)description;
- (BOOL)participantIsOptional:(id)a0;
- (long long)compareByEmailThenByContactName:(id)a0;
- (long long)compareByContactNames:(id)a0;
- (id)displayName;

@end
