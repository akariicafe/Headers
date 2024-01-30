@class NSMutableDictionary;

@interface RKLinguisticDataProvider : NSObject <RKPolarityDataProvider>

@property (retain) NSMutableDictionary *polarityMapsByLanguageID;

- (id)init;
- (void).cxx_destruct;

@end
