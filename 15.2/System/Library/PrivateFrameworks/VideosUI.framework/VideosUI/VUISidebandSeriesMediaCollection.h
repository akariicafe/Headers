@class VUITVSeriesManagedObject;

@interface VUISidebandSeriesMediaCollection : VUIMediaCollection

@property (retain, nonatomic) VUITVSeriesManagedObject *seriesManagedObject;

- (id)isLocal;
- (id)title;
- (void).cxx_destruct;
- (id)canonicalID;
- (id)HLSColorCapability;
- (id)colorCapability;
- (id)initWithMediaLibrary:(id)a0 seriesManagedObject:(id)a1 requestedProperties:(id)a2;
- (id)showIdentifier;
- (id)seasonCount;

@end
