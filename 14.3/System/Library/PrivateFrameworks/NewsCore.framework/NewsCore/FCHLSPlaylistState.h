@class FCHLSMap, NSMutableDictionary, FCHLSStreamInf, FCHLSKey, NSMutableArray;

@interface FCHLSPlaylistState : NSObject

@property (retain, nonatomic) NSMutableDictionary *mutableGroups;
@property (retain, nonatomic) FCHLSMap *currentMap;
@property (nonatomic) double currentDuration;
@property (retain, nonatomic) NSMutableArray *mutableSegments;
@property (retain, nonatomic) FCHLSStreamInf *currentStreamInf;
@property (retain, nonatomic) NSMutableArray *mutableStreamInfs;
@property (retain, nonatomic) FCHLSKey *currentKey;
@property (retain, nonatomic) NSMutableDictionary *mutableSessionData;

- (id)init;
- (void).cxx_destruct;

@end
