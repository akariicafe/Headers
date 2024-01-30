@class NSString, NSMutableDictionary, NSURL, NSDate, NSMutableArray;

@interface PODataSource : NSObject

@property (retain, nonatomic) NSMutableDictionary *podcastCollectionsByUUID;
@property (retain, nonatomic) NSMutableDictionary *podcastStationsByUUID;
@property (retain, nonatomic) NSMutableArray *podcastRevisions;
@property (retain) NSString *databaseUUID;
@property (retain) NSString *firstRevisionUUID;
@property (retain) NSDate *podcastDataPlistLastModified;
@property (retain) NSDate *revisionsDataPlistLastModified;
@property BOOL constructingData;
@property (retain, nonatomic) NSURL *plistBasePath;

+ (id)sharedInstance;

- (id)validity;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)podcastStations;
- (id)podcastCollections;
- (id)initWithPlistPath:(id)a0;
- (void)getDatabaseURL:(id /* block */)a0;
- (void)getRevisionURL:(id /* block */)a0;
- (void)_withExtensionParseDataDictionary:(id)a0 revisionDictionary:(id)a1;
- (id)arrayFromPlistURL:(id)a0;
- (id)constructModelObjectOfClass:(Class)a0 fromDictionary:(id)a1;
- (id)constructModelObjectsFromDictionaries:(id)a0 withIndexPath:(id)a1 modelObjectClass:(Class)a2;
- (void)constructRevisionFromDictionary:(id)a0 isPodcastCollections:(BOOL)a1 isDelete:(BOOL)a2;
- (void)constructRevisionsFromDictionary:(id)a0 isPodcastCollections:(BOOL)a1;
- (id)domainObjectWithUUID:(id)a0;
- (void)getContainerURL:(id /* block */)a0;
- (void)getURLs:(id /* block */)a0;
- (void)initializeDataFromDictionary;
- (BOOL)isPodcastDataStale;
- (BOOL)isPodcastRevisionDataStale;
- (BOOL)isPodcastsInstalled;
- (id)podcastCollectionWithUUID:(id)a0;
- (id)podcastCollectionsMatchingString:(id)a0 maxResults:(long long)a1;
- (id)podcastModelObjectsInArray:(id)a0 matchingString:(id)a1 maxResults:(long long)a2;
- (id)podcastRevisionsSinceAnchor:(unsigned long long)a0;
- (id)podcastStationWithUUID:(id)a0;
- (id)podcastStationsMatchingString:(id)a0 maxResults:(long long)a1;
- (id)podcastsIndexPath;

@end
