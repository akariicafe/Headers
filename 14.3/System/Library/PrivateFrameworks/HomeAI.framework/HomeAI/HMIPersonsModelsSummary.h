@class NSSet;

@interface HMIPersonsModelsSummary : HMFObject

@property (readonly) NSSet *modelSummaries;
@property (readonly) unsigned long long homeToExternalEquivalencies;
@property (readonly) unsigned long long externalToExternalEquivalencies;

- (void).cxx_destruct;
- (id)initWithModelSummaries:(id)a0 homeToExternalEquivalencies:(unsigned long long)a1 externalToExternalEquivalencies:(unsigned long long)a2;

@end
