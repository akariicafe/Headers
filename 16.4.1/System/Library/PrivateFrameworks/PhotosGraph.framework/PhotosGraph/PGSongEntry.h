@class NSString, NSSet, NSData, NSDate, NSNumber;

@interface PGSongEntry : NSManagedObject

@property (nonatomic, copy) NSString *adamID;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *artist;
@property (nonatomic, copy) NSString *album;
@property (nonatomic, copy) NSData *genreNamesAsData;
@property (nonatomic, retain) NSNumber *isExplicit;
@property (nonatomic, retain) NSNumber *duration;
@property (nonatomic, retain) NSNumber *preferenceScore;
@property (nonatomic, copy) NSString *audioLocaleIdentifier;
@property (nonatomic, copy) NSDate *lastRefreshAttemptDate;
@property (nonatomic, retain) NSNumber *arousal;
@property (nonatomic, retain) NSNumber *valence;
@property (nonatomic, retain) NSNumber *unitagMemoryAppropriateScore;
@property (nonatomic, retain) NSNumber *unitagMemoryNotAppropriateScore;
@property (nonatomic, retain) NSNumber *clearedForPhotosMemoriesExport;
@property (nonatomic, copy) NSSet *sources;
@property (nonatomic, copy) NSSet *playbackInfo;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
