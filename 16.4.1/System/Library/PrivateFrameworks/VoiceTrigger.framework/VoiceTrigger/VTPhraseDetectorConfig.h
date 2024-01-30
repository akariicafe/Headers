@class NSString, NSArray;

@interface VTPhraseDetectorConfig : NSObject

@property (readonly, nonatomic) NSString *resourcePath;
@property (readonly, nonatomic) NSString *configPathNDAPI;
@property (readonly, nonatomic) BOOL useRecognizerCombination;
@property (readonly, nonatomic) NSString *configPathRecognizer;
@property (readonly, nonatomic) BOOL useKeywordSpotting;
@property (readonly, nonatomic) NSArray *phraseConfigs;

- (void).cxx_destruct;
- (id)initWithResourcePath:(id)a0 configPathNDAPI:(id)a1 useRecognizerCombination:(BOOL)a2 configPathRecognizer:(id)a3 useKeywordSpotting:(BOOL)a4 phraseConfigs:(id)a5;

@end
