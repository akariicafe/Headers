@class NSString, NSMutableSet;

@interface RBAssertionIntransientState : NSObject <NSCopying>

@property (nonatomic) BOOL isPersistent;
@property (nonatomic) BOOL hasHereditaryGrant;
@property (nonatomic) BOOL hasDomainAttribute;
@property (nonatomic) BOOL definesRelativeStartTime;
@property (nonatomic) BOOL terminateTargetOnOriginatorExit;
@property (nonatomic) BOOL invalidatesSynchronously;
@property (nonatomic) unsigned long long startPolicy;
@property (nonatomic) unsigned long long endPolicy;
@property (nonatomic) double invalidationDuration;
@property (nonatomic) double warningDuration;
@property (readonly, nonatomic) NSMutableSet *sourceEnvironments;
@property (nonatomic) unsigned long long runningReason;
@property (nonatomic) unsigned long long legacyReason;
@property (retain, nonatomic) NSString *domainAttributes;
@property (nonatomic) BOOL suspendsOnOriginatorSuspension;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
