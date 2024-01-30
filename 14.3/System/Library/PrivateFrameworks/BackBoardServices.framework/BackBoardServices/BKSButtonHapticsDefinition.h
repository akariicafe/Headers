@class BSMutableSettings;

@interface BKSButtonHapticsDefinition : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL representsHomeButton;
@property (readonly, nonatomic, getter=_BSSettings) BSMutableSettings *BSSettings;
@property (readonly, nonatomic, getter=isLongPressEnabled) long long longPressEnabled;
@property (nonatomic) double minimumMultiplePressTimeInterval;
@property (nonatomic) double maximumMultiplePressTimeInterval;
@property (nonatomic) double minimumLongPressTimeInterval;
@property (nonatomic) double maximumLongPressTimeInterval;
@property (nonatomic) long long maximumPressCount;
@property (nonatomic) long long maximumTapCount;
@property (nonatomic) long long clickHapticAssetType;

+ (id)definitionForHomeButton;

- (id)_initWithBSSettings:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)updateFromDefinition:(id)a0 withChangeInspectorBlock:(id /* block */)a1;
- (void)encodeWithCoder:(id)a0;

@end
