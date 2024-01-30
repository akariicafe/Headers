@class _CDContextualChangeRegistration, _CDContextualPredicate, _CDContextualKeyPath;

@interface ATXInformationHeuristicRefreshContextChangeTrigger : ATXInformationHeuristicRefreshTrigger <NSSecureCoding> {
    _CDContextualKeyPath *_contextKeyPath;
    _CDContextualPredicate *_predicate;
    _CDContextualChangeRegistration *_registration;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)_start;
- (void)encodeWithCoder:(id)a0;
- (void)_stop;
- (id)initWithCDContextualKeyPath:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCDContextualKeyPath:(id)a0 equalToValue:(id)a1 withMinimumDurationInPreviousState:(double)a2;
- (unsigned long long)hash;

@end
