@class NSDictionary, UIColor;

@interface PGPlaybackStatePrerollAttributes : NSObject

@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) long long contentType;
@property (readonly, nonatomic) double requiredLinearPlaybackEndTime;
@property (readonly, nonatomic) UIColor *preferredTintColor;

+ (id)prerollAttributesForAdContentWithRequiredLinearPlaybackEndTime:(double)a0 preferredTintColor:(id)a1;
+ (id)prerollAttributesForSponsoredContentWithRequiredLinearPlaybackEndTime:(double)a0 preferredTintColor:(id)a1;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithRequiredLinearPlaybackEndTime:(double)a0 preferredTintColor:(id)a1 contentType:(long long)a2;
- (id)preferredTintColorDescription;

@end
