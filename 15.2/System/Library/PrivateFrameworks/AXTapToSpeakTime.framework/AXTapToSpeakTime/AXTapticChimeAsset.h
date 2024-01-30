@class NSDictionary, NSString, NSArray;

@interface AXTapticChimeAsset : NSObject

@property (readonly, nonatomic) NSDictionary *hapticDictionary;
@property (readonly, nonatomic) NSString *audioFilePath;
@property (readonly, nonatomic) double prePlayTimeInterval;
@property (readonly, nonatomic) float volume;
@property (readonly, nonatomic) NSArray *hapticAtomEntries;

+ (id)quarterHourAssetForType:(long long)a0;
+ (id)hourAssetForType:(long long)a0 hour:(unsigned long long)a1;
+ (id)_assetPathForChimeSoundType:(long long)a0 fileName:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (unsigned int)createSystemSoundIDForStartTime:(double)a0;
- (id)_initWithChimeSoundType:(long long)a0 audioFilePath:(id)a1 hapticsFilePath:(id)a2;

@end
