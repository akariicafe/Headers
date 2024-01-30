@class NSMutableDictionary, SignpostSupportAnimationGraceTime;

@interface SignpostSupportGraceTimeOverrideEntry : NSObject

@property (readonly, nonatomic) NSMutableDictionary *overrides;
@property (readonly) unsigned long long entryLevel;
@property (retain, nonatomic) SignpostSupportAnimationGraceTime *defaultGraceTime;

- (id)initWithEntryLevel:(unsigned long long)a0;
- (id)debugDescriptionWithWhitespacePrefix:(id)a0;
- (id)debugDescription;
- (void).cxx_destruct;

@end
