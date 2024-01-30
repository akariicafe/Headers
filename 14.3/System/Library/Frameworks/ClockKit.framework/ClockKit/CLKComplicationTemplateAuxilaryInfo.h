@interface CLKComplicationTemplateAuxilaryInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL supportsComplicationForegroundModifier;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
