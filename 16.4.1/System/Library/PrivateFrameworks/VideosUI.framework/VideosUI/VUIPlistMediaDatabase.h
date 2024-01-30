@class NSMutableDictionary, NSArray, NSURL, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface VUIPlistMediaDatabase : NSObject

@property (copy, nonatomic) NSURL *fileURL;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialDispatchQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *databaseFileDispatchSource;
@property (retain, nonatomic) NSMutableDictionary *homeVideoByIdentifier;
@property (retain, nonatomic) NSMutableDictionary *movieByIdentifier;
@property (retain, nonatomic) NSMutableDictionary *movieRentalByIdentifier;
@property (retain, nonatomic) NSMutableDictionary *showByIdentifier;
@property (readonly, nonatomic) NSArray *homeVideos;
@property (readonly, nonatomic) NSArray *movies;
@property (readonly, nonatomic) NSArray *movieRentals;
@property (readonly, nonatomic) NSArray *shows;
@property (readonly, nonatomic) NSArray *seasons;
@property (readonly, nonatomic) NSArray *episodes;

+ (void)_addItem:(id)a0 itemByIdentifier:(id)a1;
+ (void)_removeItem:(id)a0 itemByIdentifier:(id)a1;
+ (id)_sortedEntitiesArray:(id)a0;

- (id)initWithURL:(id)a0;
- (id)entityForIdentifier:(id)a0;
- (id)_dictionaryRepresentation;
- (id)itemForIdentifier:(id)a0;
- (BOOL)_saveWithError:(out id *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;
- (void)_addEpisode:(id)a0 showIdentifier:(id)a1 seasonIdentifier:(id)a2;
- (void)_addHomeVideo:(id)a0;
- (void)_addMovie:(id)a0;
- (void)_addMovieRental:(id)a0;
- (void)_addSeason:(id)a0 showIdentifier:(id)a1;
- (void)_addShow:(id)a0;
- (BOOL)_parseDatabase;
- (void)_parseDatabaseAndSendNotification;
- (void)_removeEntityWithIdentifier:(id)a0;
- (void)_removeEpisode:(id)a0 fromSeason:(id)a1;
- (void)_removeHomeVideo:(id)a0;
- (void)_removeMovie:(id)a0;
- (void)_removeMovieRental:(id)a0;
- (void)_removeSeason:(id)a0 fromShow:(id)a1;
- (void)_removeShow:(id)a0;
- (id)_seasons;
- (void)_startMonitoringDatabaseFile;
- (void)addEntity:(id)a0 showIdentifier:(id)a1 seasonIdentifier:(id)a2;
- (void)removeDownloadedMediaForIdentifier:(id)a0;
- (void)removeEntityWithIdentifier:(id)a0;
- (BOOL)saveToFileURL:(id)a0 error:(out id *)a1;
- (void)updateEntity:(id)a0 propertyName:(id)a1 propertyValue:(id)a2;
- (void)updateEntityWithIdentifier:(id)a0 propertyName:(id)a1 propertyValue:(id)a2;

@end
