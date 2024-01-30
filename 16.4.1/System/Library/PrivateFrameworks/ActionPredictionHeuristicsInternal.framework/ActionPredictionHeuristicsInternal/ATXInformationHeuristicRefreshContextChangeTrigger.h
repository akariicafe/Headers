@class NSString, _CDContextualPredicate, _CDContextualKeyPath, _CDContextualChangeRegistration;

@interface ATXInformationHeuristicRefreshContextChangeTrigger : ATXInformationHeuristicRefreshTrigger <NSSecureCoding> {
    _CDContextualKeyPath *_contextKeyPath;
    _CDContextualPredicate *_predicate;
    _CDContextualChangeRegistration *_registration;
    NSString *_registrationIdentifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)_start;
- (void)_stop;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCDContextualKeyPath:(id)a0 equalToValue:(id)a1 withMinimumDurationInPreviousState:(double)a2;
- (id)initWithCDContextualKeyPath:(id)a0 predicate:(id)a1 registrationIdentifier:(id)a2;
- (BOOL)isEqual:(id)a0;
- (id)initWithCDContextualKeyPath:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;

@end
