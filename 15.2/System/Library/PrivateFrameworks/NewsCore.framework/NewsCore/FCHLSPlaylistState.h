@class FCHLSMap, NSMutableDictionary, FCHLSStreamInf, FCHLSKey, NSMutableArray;

@interface FCHLSPlaylistState : NSObject {
    NSMutableDictionary *_mutableGroups;
    FCHLSMap *_currentMap;
    double _currentDuration;
    NSMutableArray *_mutableSegments;
    FCHLSStreamInf *_currentStreamInf;
    NSMutableArray *_mutableStreamInfs;
    FCHLSKey *_currentKey;
    NSMutableDictionary *_mutableSessionData;
}

- (void).cxx_destruct;
- (id)init;

@end
