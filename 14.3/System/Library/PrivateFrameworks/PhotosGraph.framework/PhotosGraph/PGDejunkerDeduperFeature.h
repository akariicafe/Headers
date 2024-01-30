@class NSSet;

@interface PGDejunkerDeduperFeature : NSObject <NSCopying>

@property (readonly) BOOL hasPersons;
@property (readonly) BOOL hasPeopleScenes;
@property (readonly) BOOL isVideo;
@property (readonly) NSSet *personLocalIdentifiers;
@property (readonly) NSSet *peopleScenes;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithPersonLocalIdentifiers:(id)a0 peopleScenes:(id)a1 isVideo:(BOOL)a2;
- (long long)identicalSimilarity;

@end
