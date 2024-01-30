@class NSObject, _CDContextualChangeRegistration, _CDContextualKeyPath;
@protocol NSSecureCoding, NSCopying;

@interface ATXInformationHeuristicRefreshContextChangeTrigger : ATXInformationHeuristicRefreshTrigger <NSSecureCoding> {
    _CDContextualKeyPath *_contextKeyPath;
    NSObject<NSCopying, NSSecureCoding> *_value;
    double _minDurationInPreviousState;
    _CDContextualChangeRegistration *_registration;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)_stop;
- (void)_start;
- (id)initWithCDContextualKeyPath:(id)a0 equalToValue:(id)a1 withMinimumDurationInPreviousState:(double)a2;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
