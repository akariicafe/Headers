@interface HRMedicalRecordFormatter : NSObject {
    void /* unknown type, empty encoding */ store;
    void /* unknown type, empty encoding */ context;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithConceptStore:(id)a0 context:(long long)a1;
- (id)displayItemsFromRecord:(id)a0;
- (id)structuredItemsFromRecord:(id)a0;

@end
