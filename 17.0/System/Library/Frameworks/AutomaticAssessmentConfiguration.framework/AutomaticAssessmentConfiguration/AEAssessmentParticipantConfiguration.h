@interface AEAssessmentParticipantConfiguration : NSObject <NSCopying>

@property (nonatomic) BOOL allowsNetworkAccess;

+ (id)new;
+ (id)__configurationAllowingAll;
+ (id)instanceFromIndividualConfiguration:(id)a0;

- (id)init;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)__allowsNetworkAccess;
- (id)individualConfiguration;
- (void)set__allowsNetworkAccess:(BOOL)a0;

@end
