@class NSUUID;

@interface SiriLongPressButtonContext : SiriContext

@property (nonatomic) double buttonDownTimestamp;
@property (nonatomic) long long longPressBehavior;
@property (retain, nonatomic) NSUUID *activationEventInstrumentationIdentifier;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
