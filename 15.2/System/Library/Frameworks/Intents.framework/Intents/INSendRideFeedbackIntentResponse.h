@interface INSendRideFeedbackIntentResponse : INIntentResponse

@property (readonly, nonatomic) long long code;

+ (BOOL)supportsSecureCoding;

- (id)_dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)initWithBackingStore:(id)a0;
- (id)initWithCode:(long long)a0 userActivity:(id)a1;
- (id)_initWithCode:(long long)a0 userActivity:(id)a1;
- (id)initWithCoder:(id)a0;

@end
