@interface EKOrganizer : EKParticipant

+ (id)organizerWithName:(id)a0 emailAddress:(id)a1 phoneNumber:(id)a2 address:(id)a3 isCurrentUser:(BOOL)a4;
+ (Class)frozenClass;

- (BOOL)isCurrentUser;
- (id)owner;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)setCurrentUser:(BOOL)a0;
- (long long)scheduleAgent;
- (id)initWithName:(id)a0 emailAddress:(id)a1 phoneNumber:(id)a2 address:(id)a3 isCurrentUser:(BOOL)a4;

@end
