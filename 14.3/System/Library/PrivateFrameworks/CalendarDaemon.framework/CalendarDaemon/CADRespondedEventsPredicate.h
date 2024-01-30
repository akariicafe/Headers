@class NSString;

@interface CADRespondedEventsPredicate : CADPredicate <EKPredicateEvaluating, EKDefaultPropertiesLoading, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)predicate;

- (BOOL)ekPredicateEvaluateWithObject:(id)a0;
- (id)predicateFormat;
- (id)defaultPropertiesToLoad;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)shouldLoadDefaultProperties;

@end
