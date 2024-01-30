@interface SBHSpecialAvocadoDescriptor : CHSAvocadoDescriptor

@property (nonatomic) unsigned long long type;

+ (BOOL)supportsSecureCoding;

- (id)accentColor;
- (id)_initWithType:(unsigned long long)a0 supportedSizeClasses:(unsigned long long)a1;
- (id)initWithType:(unsigned long long)a0 supportedSizeClasses:(unsigned long long)a1;
- (id)initWithCoder:(id)a0;
- (id)initWithType:(unsigned long long)a0;
- (id)backgroundColor;
- (void)encodeWithCoder:(id)a0;

@end
