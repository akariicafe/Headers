@class NSArray, NSString;

@interface VNCreateAnimalprintRequest : VNImageBasedRequest <VNDetectedObjectObservationAccepting>

@property (readonly, copy) NSArray *results;
@property (copy, nonatomic) NSArray *inputDetectedObjectObservations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (const struct { unsigned long long x0; struct { int x0; int x1; } x1; struct { int x0; int x1; } x2; struct { int x0; int x1; } x3; } *)revisionAvailability;
+ (id)supportedPrivateRevisions;
+ (id)descriptionForPrivateRevision:(unsigned long long)a0;
+ (unsigned long long)compatibleRevisionForDependentRequestOfClass:(Class)a0 beingPerformedByRevision:(unsigned long long)a1;
+ (id)createVNEntityIdentificationModelEntryPrintForRevision:(unsigned long long)a0 fromDescriptorData:(const void *)a1 length:(unsigned long long)a2 elementCount:(unsigned long long)a3 error:(id *)a4;

- (long long)dependencyProcessingOrdinality;
- (BOOL)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (BOOL)warmUpSession:(id)a0 error:(id *)a1;
- (void)_determineAnimalsToProcessFrom:(id)a0 outputAnimalsThatNeedNoProcessing:(id)a1 outputAnimalsThatNeedAnimalprints:(id)a2;

@end
