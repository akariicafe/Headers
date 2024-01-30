@class VUITVSeriesManagedObject;

@interface VUISidebandSeriesMediaCollection : VUIMediaCollection

@property (retain, nonatomic) VUITVSeriesManagedObject *seriesManagedObject;

- (id)isLocal;
- (void).cxx_destruct;
- (id)canonicalID;
- (id)title;
- (id)HLSColorCapability;
- (id)colorCapability;
- (id)seasonCount;
- (id)showIdentifier;
- (id)initWithMediaLibrary:(id)a0 seriesManagedObject:(id)a1 requestedProperties:(id)a2;

@end
