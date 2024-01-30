@class NSManagedObjectContext;

@interface SHLouvainClusterQuery : NSObject

@property (retain, nonatomic) NSManagedObjectContext *moc;

- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (id)tracksAtCohesionLevel:(long long)a0 forQueryTracks:(id)a1 filteredBy:(id)a2;
- (id)tracksAtLevel:(long long)a0 forQueryTracks:(id)a1 filteredBy:(id)a2;
- (id)validPrefixesForTracks:(id)a0 ofLength:(long long)a1;
- (id)pathString:(id)a0 ofLength:(long long)a1;

@end
