@class NSArray, NSDictionary, NSMutableSet, NSSet, NSString, FCHLSPlaylistState;

@interface FCHLSPlaylist : NSObject <FCM3U8ParserDelegate>

@property (retain, nonatomic) NSArray *groups;
@property (retain, nonatomic) NSArray *streamInfs;
@property (retain, nonatomic) NSArray *segments;
@property (retain, nonatomic) NSDictionary *sessionData;
@property (nonatomic) BOOL independentSegments;
@property (retain, nonatomic) FCHLSPlaylistState *state;
@property (retain, nonatomic) NSMutableSet *uniqueKeys;
@property (retain, nonatomic) NSArray *requestedBitrates;
@property (readonly, nonatomic) NSSet *keys;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_rewritePlaylistWithParser:(id)a0 toURL:(id)a1 requestedBitrates:(id)a2 error:(id *)a3;
+ (id)_playlistUsingParser:(id)a0 error:(id *)a1;
+ (BOOL)rewritePlaylistData:(id)a0 toURL:(id)a1 requestedBitrates:(id)a2 error:(id *)a3;
+ (BOOL)rewritePlaylistURL:(id)a0 toURL:(id)a1 requestedBitrates:(id)a2 error:(id *)a3;
+ (id)playlistParsingData:(id)a0 error:(id *)a1;
+ (id)playlistParsingURL:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (void)parser:(id)a0 lineIsTag:(id)a1 value:(id)a2 attributeList:(id)a3;
- (BOOL)parserShouldCollectLine:(id)a0;
- (void)parser:(id)a0 lineIsComment:(id)a1;
- (void)parser:(id)a0 lineIsURL:(id)a1;
- (id)initWithRequestedBitrates:(id)a0;
- (BOOL)_parseUsingParser:(id)a0 error:(id *)a1;

@end
