@class HKPIIRedactor, NSString, NSDictionary, NSMutableArray, HKJSONVisitor;

@interface HDHRSDataCollectionScrubber : NSObject <HKJSONVisitorDelegate> {
    HKJSONVisitor *_visitor;
    HKPIIRedactor *_redactor;
    NSDictionary *_rules;
    NSMutableArray *_objectStack;
    id _redactedResource;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)scrubberForResource:(id)a0 redactor:(id)a1 rules:(id)a2 error:(out id *)a3;

- (void).cxx_destruct;
- (long long)visitor:(id)a0 didVisitArray:(id)a1;
- (long long)visitor:(id)a0 didVisitDictionary:(id)a1;
- (long long)visitor:(id)a0 visitPrimitive:(id)a1;
- (long long)visitor:(id)a0 willVisitArray:(id)a1;
- (long long)visitor:(id)a0 willVisitDictionary:(id)a1;
- (void)_addObjectToTopObject:(id)a0 key:(id)a1;
- (unsigned long long)_redactorOptionsForRule:(id)a0;
- (id)_ruleNodeForKeyPath:(id)a0;
- (id)generateRedactedResource;

@end
