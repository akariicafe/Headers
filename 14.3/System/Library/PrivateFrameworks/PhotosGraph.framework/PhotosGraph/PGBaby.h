@class NSString, NSMutableSet;

@interface PGBaby : NSObject <PGGraphIngestBaby>

@property (readonly, nonatomic) NSMutableSet *momentNodes;
@property (readonly, nonatomic) NSMutableSet *caretakerNodes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithMomentNodes:(id)a0 caretakerNodes:(id)a1;

@end
