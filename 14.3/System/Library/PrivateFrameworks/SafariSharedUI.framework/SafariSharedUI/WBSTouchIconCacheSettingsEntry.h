@class NSString, NSDate;

@interface WBSTouchIconCacheSettingsEntry : NSObject <WBSSiteMetadataImageCacheSettingsEntry>

@property (readonly, copy, nonatomic) NSString *host;
@property (readonly, copy, nonatomic) NSString *UUIDString;
@property (readonly, nonatomic) NSDate *lastRequestDate;
@property (readonly, nonatomic) BOOL lastRequestWasInUserLoadedWebpage;
@property (readonly, nonatomic) long long requestCount;
@property (readonly, nonatomic, getter=isIconInCache) BOOL iconInCache;
@property (readonly, nonatomic) BOOL requestDidSucceed;
@property (readonly, nonatomic) long long transparencyAnalysisResult;
@property (readonly, nonatomic) BOOL higherPriorityIconDownloadFailedDueToNetworkError;
@property (readonly, nonatomic) unsigned long long downloadStatusFlags;
@property (readonly, nonatomic) long long databaseID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)entryWithHost:(id)a0 lastRequestDate:(id)a1 lastRequestWasInUserLoadedWebpage:(BOOL)a2 requestCount:(long long)a3 iconInCache:(BOOL)a4 requestDidSucceed:(BOOL)a5 transparencyAnalysisResult:(long long)a6 higherPriorityIconDownloadFailedDueToNetworkError:(BOOL)a7 UUIDString:(id)a8;

- (id)entryWithDatabaseID:(long long)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithHost:(id)a0;
- (id)entryByAddingRequestInUserLoadedWebPage:(BOOL)a0 isIconInCache:(BOOL)a1 requestDidSucceed:(BOOL)a2 transparencyAnalysisResult:(long long)a3 higherPriorityIconDownloadFailedDueToNetworkError:(BOOL)a4 UUIDString:(id)a5;
- (id)initWithSQLiteRow:(id)a0;
- (id)initWithHost:(id)a0 lastRequestDate:(id)a1 lastRequestWasInUserLoadedWebpage:(BOOL)a2 requestCount:(long long)a3 iconInCache:(BOOL)a4 requestDidSucceed:(BOOL)a5 transparencyAnalysisResult:(long long)a6 higherPriorityIconDownloadFailedDueToNetworkError:(BOOL)a7 UUIDString:(id)a8;

@end
