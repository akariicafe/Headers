@class NSString, NSArray, NSDictionary, NSMutableSet, FCHLSPlaylistState;

@interface FCHLSPlaylist : NSObject <FCM3U8ParserDelegate> {
    BOOL _independentSegments;
    NSArray *_groups;
    NSArray *_streamInfs;
    NSArray *_segments;
    NSDictionary *_sessionData;
    FCHLSPlaylistState *_state;
    NSMutableSet *_uniqueKeys;
    NSArray *_requestedBitrates;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)parser:(id)a0 lineIsComment:(id)a1;
- (void)parser:(id)a0 lineIsTag:(id)a1 value:(id)a2 attributeList:(id)a3;
- (void)parser:(id)a0 lineIsURL:(id)a1;
- (BOOL)parserShouldCollectLine:(id)a0;

@end
