@class NSString, HMPresenceEventActivation, HMMutableArray;

@interface HMPresenceEvent : HMEvent <NSSecureCoding, NSCopying, NSMutableCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *presenceType;
@property (retain, nonatomic) HMPresenceEventActivation *activation;
@property (readonly, nonatomic) unsigned long long activationGranularity;
@property (readonly, nonatomic) HMMutableArray *observedUsers;
@property (readonly, nonatomic) unsigned long long presenceEventType;
@property (readonly, nonatomic) unsigned long long presenceUserType;

+ (id)createWithDictionary:(id)a0 home:(id)a1;
+ (id)users:(id)a0 home:(id)a1 presenceType:(id)a2;
+ (BOOL)isSupportedForHome:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_serializeForAdd;
- (void)_handleEventUpdatedNotification:(id)a0;
- (id)initWithDict:(id)a0 presenceType:(id)a1 users:(id)a2 activation:(id)a3;
- (id)initWithPresenceType:(id)a0 users:(id)a1;
- (id)initWithDict:(id)a0 presenceType:(id)a1 users:(id)a2 activationGranularity:(unsigned long long)a3;
- (id)initWithPresenceEventType:(unsigned long long)a0 presenceUserType:(unsigned long long)a1 users:(id)a2;
- (void)_updatePresenceType:(id)a0 completionHandler:(id /* block */)a1;
- (void)_updateUsers:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithPresenceType:(id)a0;
- (void)setPresenceEventType:(unsigned long long)a0;
- (id)initWithPresenceEventType:(unsigned long long)a0 presenceUserType:(unsigned long long)a1;
- (void)setPresenceUserType:(unsigned long long)a0;
- (void)updatePresenceType:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateUsers:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithCoder:(id)a0;
- (id)users;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)_update:(id)a0 completionHandler:(id /* block */)a1;
- (void)encodeWithCoder:(id)a0;

@end
