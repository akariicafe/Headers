@interface FCFeedViewportUtilities : NSObject

+ (void)_fixPersistenceGapIdentifiersIn:(id)a0 internalElements:(id)a1 oldViewport:(id)a2;
+ (id)diffWithNewExternalElements:(id)a0 newInternalElements:(id)a1 modifiedInternalGroups:(id)a2 expandedGap:(id)a3 oldViewport:(id)a4;
+ (id)externalElementsFromInternalElements:(id)a0 oldViewport:(id)a1 feedDescriptor:(id)a2;
+ (id)_externalGroupIDFromGroup:(id)a0;
+ (void)_replaceDeflatedElementsWithPersistenceGapsIn:(id)a0;

@end
