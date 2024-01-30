@interface SFClearInputFeedback : SFFeedback

@property (nonatomic) unsigned long long triggerEvent;

+ (BOOL)supportsSecureCoding;

- (id)initWithEvent:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
