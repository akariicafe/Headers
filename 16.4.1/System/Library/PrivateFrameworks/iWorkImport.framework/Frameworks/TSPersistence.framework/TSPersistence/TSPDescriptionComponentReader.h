@class TSPDescriptionGenerator;

@interface TSPDescriptionComponentReader : TSPComponentReader {
    TSPDescriptionGenerator *_descriptionGenerator;
}

- (void)read;
- (void).cxx_destruct;
- (id)initWithComponent:(id)a0 delegate:(id)a1 readChannel:(id)a2 descriptionGenerator:(id)a3;
- (id)newUnarchiverWithObjectIdentifier:(long long)a0 messageInfo:(const void *)a1 unarchiveClass:(Class)a2 message:(void *)a3 messageVersion:(unsigned long long)a4 strongReferences:(struct unique_ptr<TSP::IdentifierMap<bool>, std::default_delete<TSP::IdentifierMap<bool>>> { struct __compressed_pair<TSP::IdentifierMap<bool> *, std::default_delete<TSP::IdentifierMap<bool>>> { void *x0; } x0; })a5 unknownContent:(id)a6 hasAlternateMessages:(BOOL)a7;
- (BOOL)shouldProceedParsingOnFailure;
- (BOOL)shouldValidateComponentsOfInMemoryObjects;
- (id)unknownObjectUnarchiverWithArchiveInfo:(const void *)a0 stream:(struct DispatchDataInputStream { void /* function */ **x0; id x1; unsigned long long x2; unsigned long long x3; id x4; unsigned long long x5; char *x6; } *)a1 ignoreMessageData:(BOOL)a2 hasAlternateMessages:(BOOL)a3;

@end
