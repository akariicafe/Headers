@interface IdentifierGroupingUtils : NSObject

+ (id)createIdentifier:(unsigned int)a0 interpretationGroupIndex:(unsigned int)a1 nodeIndex:(unsigned int)a2 spanIdentifier:(id)a3;
+ (void)createIdentifierGroups:(id)a0 alignmentSpanDict:(id)a1 identifiers:(id)a2 nodeIndex:(unsigned int)a3 interpretationGroupCurrentMax:(id)a4 tagSpans:(id)a5;
+ (void)createNonOverlapping:(id)a0 interpretationGroup:(id)a1 start:(unsigned long long)a2 interpretationGroups:(id)a3;
+ (id)getInterpretationGroupMax:(id)a0;
+ (id)getInterpretationGroups:(id)a0;
+ (id)getTokenIndexIdentifier:(unsigned int)a0 interpretationGroup:(unsigned int)a1 nodeIndex:(unsigned int)a2 span:(id)a3 spanIdentifier:(id)a4;
+ (id)limitAlignments:(id)a0 alignmentSpanDict:(id)a1;
+ (void)sortAlignmentDict:(id)a0 orderedIndexes:(id)a1 alignmentSpanDict:(id)a2;

@end
