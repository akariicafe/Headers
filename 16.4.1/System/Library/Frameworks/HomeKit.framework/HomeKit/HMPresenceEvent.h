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
+ (BOOL)isSupportedForHome:(id)a0;
+ (id)users:(id)a0 home:(id)a1 presenceType:(id)a2;

- (void)encodeWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)users;
- (BOOL)_mergeWithNewObject:(id)a0;
- (id)_serializeForAdd;
- (void)_updateFromDictionary:(id)a0;
- (id)initWithDict:(id)a0 presenceType:(id)a1 users:(id)a2 activation:(id)a3;
- (id)initWithDict:(id)a0 presenceType:(id)a1 users:(id)a2 activationGranularity:(unsigned long long)a3;
- (id)initWithPresenceEventType:(unsigned long long)a0 presenceUserType:(unsigned long long)a1;
- (id)initWithPresenceEventType:(unsigned long long)a0 presenceUserType:(unsigned long long)a1 users:(id)a2;
- (id)initWithPresenceType:(id)a0;
- (id)initWithPresenceType:(id)a0 users:(id)a1;
- (void)setPresenceEventType:(unsigned long long)a0;
- (void)setPresenceUserType:(unsigned long long)a0;
- (void)updatePresenceType:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateUsers:(id)a0 completionHandler:(id /* block */)a1;

@end
