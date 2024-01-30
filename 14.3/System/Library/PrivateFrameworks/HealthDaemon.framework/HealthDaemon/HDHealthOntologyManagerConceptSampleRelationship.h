@class NSUUID, HKConceptIdentifier;

@interface HDHealthOntologyManagerConceptSampleRelationship : NSObject

@property (readonly, copy, nonatomic) NSUUID *sampleUUID;
@property (readonly, copy, nonatomic) HKConceptIdentifier *conceptIdentifier;

- (id)init;
- (void).cxx_destruct;
- (id)initWithSampleUUID:(id)a0 conceptIdentifier:(id)a1;

@end
