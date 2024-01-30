@interface CKVOntologyMapper : NSObject

+ (id)matchingSpanNLV3FromSpanMatch:(id)a0 withItemInfo:(id)a1;
+ (id)ontologyLabelFromFieldType:(long long)a0;
+ (id)_ontologyLabelFromFieldType:(long long)a0 fieldComponent:(unsigned char)a1;
+ (id)_ontologyLabelFromMergedFieldMatch:(id)a0 itemType:(long long)a1;
+ (id)_ontologyLabelForMergedPersonFields:(id)a0;
+ (BOOL)_fieldSupportsMergeAsPersonName:(id)a0;
+ (id)ontologyGraphFromSpanMatch:(id)a0 withItemInfo:(id)a1 rankScore:(float)a2;
+ (struct optional<std::pair<const siri::ontology::OntologyNodeName *, const siri::ontology::OntologyEdgeName *>> { union { char x0; struct pair<const siri::ontology::OntologyNodeName *, const siri::ontology::OntologyEdgeName *> { struct OntologyNodeName *x0; struct OntologyEdgeName *x1; } x1; } x0; BOOL x1; })_ontologyNodeEdgePairFromSpanMatch:(id)a0;
+ (void)_setIdentifierOnEdgeNode:(id)a0 withItemInfo:(id)a1 spanInfo:(id)a2 rankScore:(float)a3;
+ (id)_stringFromOntologyNodeEdgePair:(struct pair<const siri::ontology::OntologyNodeName *, const siri::ontology::OntologyEdgeName *> { struct OntologyNodeName *x0; struct OntologyEdgeName *x1; })a0;
+ (struct optional<std::pair<const siri::ontology::OntologyNodeName *, const siri::ontology::OntologyEdgeName *>> { union { char x0; struct pair<const siri::ontology::OntologyNodeName *, const siri::ontology::OntologyEdgeName *> { struct OntologyNodeName *x0; struct OntologyEdgeName *x1; } x1; } x0; BOOL x1; })_ontologyNodeEdgePairFromFieldType:(long long)a0 fieldComponent:(unsigned char)a1;
+ (id)prettyPrintUSOGraph:(id)a0;

@end
