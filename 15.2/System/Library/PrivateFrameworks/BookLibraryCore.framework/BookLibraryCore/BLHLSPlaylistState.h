@class BLHLSStreamInf, NSMutableDictionary, BLHLSKey, NSMutableArray, BLHLSMap;

@interface BLHLSPlaylistState : NSObject

@property (retain, nonatomic) NSMutableDictionary *mutableGroups;
@property (retain, nonatomic) BLHLSMap *currentMap;
@property (nonatomic) double currentDuration;
@property (retain, nonatomic) NSMutableArray *mutableSegments;
@property (retain, nonatomic) BLHLSStreamInf *currentStreamInf;
@property (retain, nonatomic) NSMutableArray *mutableStreamInfs;
@property (retain, nonatomic) BLHLSKey *currentKey;

- (void).cxx_destruct;
- (id)init;

@end
