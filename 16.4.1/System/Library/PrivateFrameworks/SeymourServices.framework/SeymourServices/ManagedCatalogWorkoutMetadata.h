@class NSString, NSSet, NSData, ManagedCatalogPreview;

@interface ManagedCatalogWorkoutMetadata : NSManagedObject

@property (nonatomic, copy) NSData *artwork;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *location;
@property (nonatomic, copy) NSString *musicPlaylistIdentifier;
@property (nonatomic, copy) NSString *musicPlaylistURL;
@property (nonatomic, copy) NSString *sharingURL;
@property (nonatomic, copy) NSString *streamingProgramIdentifier;
@property (nonatomic, copy) NSString *streamingURL;
@property (nonatomic, copy) NSString *summary;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) NSSet *accessibilityFeatures;
@property (nonatomic, retain) NSSet *coachingEvents;
@property (nonatomic, retain) NSSet *commentaryEvents;
@property (nonatomic, retain) NSSet *contributors;
@property (nonatomic, retain) NSSet *languageDisclaimers;
@property (nonatomic, retain) NSSet *mediaMoments;
@property (nonatomic, retain) NSSet *musicTracks;
@property (nonatomic, retain) ManagedCatalogPreview *preview;
@property (nonatomic, retain) NSSet *trainerEvents;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
