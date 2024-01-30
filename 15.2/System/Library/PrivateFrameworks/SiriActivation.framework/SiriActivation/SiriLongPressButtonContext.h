@interface SiriLongPressButtonContext : SiriContext

@property (nonatomic) double buttonDownTimestamp;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
