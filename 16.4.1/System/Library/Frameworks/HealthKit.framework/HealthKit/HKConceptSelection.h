@interface HKConceptSelection : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)selectionForNodeWithIdentifier:(id)a0;
+ (id)andSelectionWithSubselections:(id)a0;
+ (id)notSelectionWithSubselections:(id)a0;
+ (id)orSelectionWithSubselections:(id)a0;
+ (id)selectionForAllNodes;
+ (id)selectionForNoNodes;
+ (id)selectionForNodesWithAttribute:(long long)a0 likeStringValue:(id)a1;
+ (id)selectionForNodesWithAttribute:(long long)a0 stringValue:(id)a1;
+ (id)selectionForNodesWithAttribute:(long long)a0 value:(id)a1;
+ (id)selectionForNodesWithCoding:(id)a0;
+ (id)selectionForObjectsWithRelationship:(long long)a0 fromSubjectSelection:(id)a1;
+ (id)selectionForObjectsWithRelationshipFromSubjectSelection:(id)a0;
+ (id)selectionForSubjectsWithRelationship:(long long)a0 toObjectSelection:(id)a1;
+ (id)selectionForSubjectsWithRelationshipToObjectSelection:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;

@end
