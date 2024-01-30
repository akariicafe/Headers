@class NSString;

@interface EKPersistentOrganizer : EKPersistentParticipant

@property (retain, nonatomic) NSString *displayNameRaw;
@property (retain, nonatomic) NSString *emailAddress;
@property (retain, nonatomic) NSString *URLString;
@property (nonatomic) BOOL isCurrentUser;

+ (Class)meltedClass;
+ (id)relations;
+ (id)organizerWithName:(id)a0 emailAddress:(id)a1 address:(id)a2 isCurrentUser:(BOOL)a3;
+ (id)defaultPropertiesToLoad;

- (int)entityType;
- (void)setOwner:(id)a0;
- (id)initWithName:(id)a0 emailAddress:(id)a1 address:(id)a2 isCurrentUser:(BOOL)a3;
- (id)description;
- (long long)scheduleAgent;
- (void)setScheduleAgent:(long long)a0;
- (id)owner;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setIsCurrentUser:(BOOL)a0;
- (BOOL)isCurrentUser;

@end
