@class NSString, NSData, NSDate, NSNumber;

@interface PGMemoryDisplaySongEntry : NSManagedObject

@property (nonatomic, copy) NSString *adamID;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *artist;
@property (nonatomic, copy) NSString *album;
@property (nonatomic, retain) NSNumber *isExplicit;
@property (nonatomic, retain) NSNumber *duration;
@property (nonatomic, copy) NSString *artworkURLFormat;
@property (nonatomic, copy) NSString *songURLPath;
@property (nonatomic, copy) NSString *introPreviewPath;
@property (nonatomic, copy) NSData *flexMLAnalysisAsData;
@property (nonatomic, retain) NSNumber *arousal;
@property (nonatomic, retain) NSNumber *valence;
@property (nonatomic, retain) NSNumber *loudnessMainPeak;
@property (nonatomic, retain) NSNumber *loudnessMainValue;
@property (nonatomic, retain) NSNumber *clearedForPhotosMemoriesExport;
@property (nonatomic, copy) NSString *contentProvider;
@property (nonatomic, copy) NSDate *cacheDate;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
