@class VUITVSeasonManagedObject;

@interface VUISidebandSeasonMediaCollection : VUIMediaCollection

@property (retain, nonatomic) VUITVSeasonManagedObject *seasonManagedObject;

- (id)isLocal;
- (id)seasonNumber;
- (void).cxx_destruct;
- (id)canonicalID;
- (id)title;
- (id)HLSColorCapability;
- (id)colorCapability;
- (id)showIdentifier;
- (id)initWithMediaLibrary:(id)a0 seasonManagedObject:(id)a1 requestedProperties:(id)a2;

@end
