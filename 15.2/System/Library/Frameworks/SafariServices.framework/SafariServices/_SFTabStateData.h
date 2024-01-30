@class NSString, NSData;

@interface _SFTabStateData : NSObject

@property (retain, nonatomic) NSString *UUIDString;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *userVisibleURL;
@property (nonatomic) long long orderIndex;
@property (nonatomic) double lastViewedTime;
@property (nonatomic) long long readerViewTopScrollOffset;
@property (nonatomic) BOOL showingReader;
@property (nonatomic) BOOL displayingStandaloneImage;
@property (nonatomic) BOOL wasOpenedFromLink;
@property (nonatomic) BOOL privateBrowsing;
@property (retain, nonatomic) NSData *sessionStateData;
@property (nonatomic) long long owningBrowserWindowDatabaseID;
@property (copy, nonatomic) NSString *owningBrowserWindowUUIDString;
@property (nonatomic) BOOL skipUpdate;
@property (nonatomic) unsigned long long uncompressedSessionStateDataSize;
@property (readonly, nonatomic) BOOL isSessionStateDataCompressed;
@property (readonly, nonatomic) NSData *compressedSessionStateData;
@property (nonatomic) BOOL skipSavingSessionState;
@property (nonatomic) int readingListBookmarkID;

+ (id)uncompressedDataWithRawData:(id)a0 uncompressedSize:(unsigned long long)a1;

- (id)toDictionary;
- (id)initWithSQLiteRow:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (void)_uncompressSessionStateDataIfNeeded;

@end
