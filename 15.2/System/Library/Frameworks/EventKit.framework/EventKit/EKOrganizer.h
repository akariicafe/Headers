@interface EKOrganizer : EKParticipant

+ (Class)frozenClass;
+ (id)organizerWithName:(id)a0 emailAddress:(id)a1 phoneNumber:(id)a2 address:(id)a3 isCurrentUser:(BOOL)a4;

- (void)setCurrentUser:(BOOL)a0;
- (id)initWithName:(id)a0 emailAddress:(id)a1 phoneNumber:(id)a2 address:(id)a3 isCurrentUser:(BOOL)a4;
- (id)description;
- (long long)scheduleAgent;
- (id)owner;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isCurrentUser;

@end
