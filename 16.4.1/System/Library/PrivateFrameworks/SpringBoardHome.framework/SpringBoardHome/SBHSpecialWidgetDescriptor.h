@class NSString;

@interface SBHSpecialWidgetDescriptor : CHSWidgetDescriptor {
    NSString *_displayName;
    NSString *_description;
}

@property (nonatomic) unsigned long long type;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)displayName;
- (id)succinctDescriptionBuilder;
- (id)backgroundColor;
- (id)initWithCoder:(id)a0;
- (id)_initWithType:(unsigned long long)a0 supportedSizeClasses:(unsigned long long)a1;
- (id)initWithType:(unsigned long long)a0;
- (id)accentColor;
- (BOOL)sbh_canBeAddedToStack;
- (BOOL)isEqual:(id)a0;
- (id)widgetDescription;
- (unsigned long long)hash;
- (id)initWithType:(unsigned long long)a0 supportedSizeClasses:(unsigned long long)a1;
- (void).cxx_destruct;

@end
