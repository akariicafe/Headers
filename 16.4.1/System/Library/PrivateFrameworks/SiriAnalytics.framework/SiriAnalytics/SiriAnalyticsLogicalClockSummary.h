@interface SiriAnalyticsLogicalClockSummary : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ clockIdentifier;
    void /* unknown type, empty encoding */ derivativeClockIdentifiers;
    void /* unknown type, empty encoding */ active;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
