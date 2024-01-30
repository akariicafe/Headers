@class NSString;

@interface SBHSpecialAvocadoDescriptor : CHSAvocadoDescriptor {
    NSString *_displayName;
    NSString *_description;
}

@property (nonatomic) unsigned long long type;

+ (BOOL)supportsSecureCoding;

- (id)displayName;
- (id)widgetDescription;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_initWithType:(unsigned long long)a0 supportedSizeClasses:(unsigned long long)a1;
- (id)backgroundColor;
- (id)initWithType:(unsigned long long)a0 supportedSizeClasses:(unsigned long long)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)initWithType:(unsigned long long)a0;
- (unsigned long long)hash;
- (id)accentColor;
- (BOOL)sbh_canBeAddedToStack;

@end
