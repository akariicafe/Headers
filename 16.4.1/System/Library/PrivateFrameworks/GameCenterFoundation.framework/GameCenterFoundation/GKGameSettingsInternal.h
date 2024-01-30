@class NSString;

@interface GKGameSettingsInternal : GKInternalRepresentation

@property (retain, nonatomic) NSString *bundleID;
@property (nonatomic) long long allowFriendListAccess;

+ (BOOL)supportsSecureCoding;
+ (id)secureCodedPropertyKeys;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)allowFriendListAccessString;
- (id)initWithGameSettings:(id)a0;
- (id)serverAllowFriendListAccessValue;

@end
