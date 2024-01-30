@interface PGGraphHelper : NSObject

+ (id)suggestedMeIdentifierWithPersonClusterManager:(id)a0 forPersons:(id)a1 updateBlock:(id /* block */)a2;
+ (id)densityClusteringForObjects:(id)a0 maximumDistance:(double)a1 minimumNumberOfObjects:(unsigned long long)a2 withDistanceBlock:(id /* block */)a3;
+ (id)socialGroupsOverTheYearsWithPersonClusterManager:(id)a0 forPersons:(id)a1 updateBlock:(id /* block */)a2;
+ (id)multiLevelSocialGroupsWithPersonClusterManager:(id)a0 forPersons:(id)a1 updateBlock:(id /* block */)a2;
+ (id)_createSocialGraphWithPersonClusterManager:(id)a0 persons:(id)a1 moments:(id)a2 inferredMePersonIdentifier:(id *)a3 updateBlock:(id /* block */)a4;
+ (id)_socialGroupsIdentifiersInGraph:(id)a0 includeMeNode:(BOOL)a1 includeCouples:(BOOL)a2 includeInvalid:(BOOL)a3;
+ (double)_confidenceForMePersonIdentifier:(id)a0 withPersonClusters:(id)a1 inPhotoLibrary:(id)a2;

@end
