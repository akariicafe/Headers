@class NSString, NSDictionary, CAFilter;

@interface _UIVisualEffectFilterEntry : NSObject <_UIVisualEffectDiffable> {
    CAFilter *_filter;
}

@property (copy, nonatomic) NSString *filterType;
@property (copy, nonatomic) NSDictionary *configurationValues;
@property (copy, nonatomic) NSDictionary *requestedValues;
@property (copy, nonatomic) NSDictionary *identityValues;
@property (nonatomic) double requestedScaleHint;
@property (nonatomic) double identityScaleHint;
@property (nonatomic) BOOL useRelaxedDiffingRule;
@property (readonly, nonatomic) CAFilter *filter;
@property (readonly, copy, nonatomic) NSString *filterName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isSameTypeOfEffect:(id)a0;
- (void)forceUniqueName;
- (id)copyForTransitionToEffect:(id)a0;
- (BOOL)canTransitionToEffect:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyForTransitionOut;
- (void)convertToIdentity;
- (id)initWithFilterType:(id)a0 configurationValues:(id)a1 requestedValues:(id)a2 identityValues:(id)a3;
- (id)valueAsRequested:(BOOL)a0;
- (double)scaleHintAsRequested:(BOOL)a0;

@end
