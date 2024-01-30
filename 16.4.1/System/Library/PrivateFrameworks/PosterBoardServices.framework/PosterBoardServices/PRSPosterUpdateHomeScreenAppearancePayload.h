@class PRSPosterUpdateSessionInfo, NSString, PRSPosterUpdateColorPayload;

@interface PRSPosterUpdateHomeScreenAppearancePayload : PRSPosterUpdatePayload <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long updatedAppearanceType;
@property (readonly, copy, nonatomic) PRSPosterUpdateColorPayload *solidColorAppearance;
@property (readonly, copy, nonatomic) PRSPosterUpdateColorPayload *gradientColorAppearance;
@property (readonly, nonatomic) PRSPosterUpdateSessionInfo *switcherProviderUpdateSessionInfo;
@property (readonly, copy, nonatomic) NSString *homeProviderIdentifier;
@property (readonly, nonatomic) PRSPosterUpdateSessionInfo *homeProviderUpdateSessionInfo;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)rawValue;
- (void).cxx_destruct;
- (id)initWithUpdatedAppearanceType:(unsigned long long)a0;
- (id)initWithUpdatedAppearanceType:(unsigned long long)a0 gradientColorAppearance:(id)a1;
- (id)initWithUpdatedAppearanceType:(unsigned long long)a0 solidColorAppearance:(id)a1;
- (id)initWithUpdatedAppearanceType:(unsigned long long)a0 updateHomePoster:(id)a1 homeProviderIdentifier:(id)a2;
- (id)initWithUpdatedAppearanceType:(unsigned long long)a0 updateSwitcherPoster:(id)a1;

@end
