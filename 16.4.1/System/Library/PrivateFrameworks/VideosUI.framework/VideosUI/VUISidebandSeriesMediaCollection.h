@class VUITVSeriesManagedObject;

@interface VUISidebandSeriesMediaCollection : VUIMediaCollection

@property (retain, nonatomic) VUITVSeriesManagedObject *seriesManagedObject;

- (id)isLocal;
- (id)title;
- (void).cxx_destruct;
- (id)canonicalID;
- (id)colorCapability;
- (id)HLSColorCapability;
- (id)initWithMediaLibrary:(id)a0 seriesManagedObject:(id)a1 requestedProperties:(id)a2;
- (id)seasonCount;
- (id)showIdentifier;

@end
