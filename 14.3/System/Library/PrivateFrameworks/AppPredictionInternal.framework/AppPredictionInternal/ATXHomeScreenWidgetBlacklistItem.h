@class ATXHomeScreenWidgetPersonality, NSDate;

@interface ATXHomeScreenWidgetBlacklistItem : NSObject <NSSecureCoding, ATXHomeScreenWidgetPersonalityProviding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) ATXHomeScreenWidgetPersonality *personality;
@property (readonly, nonatomic) NSDate *blacklistedDate;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithHomeScreenWidgetPersonality:(id)a0;
- (id)initWithHomeScreenWidgetPersonality:(id)a0 blacklistedDate:(id)a1;

@end
