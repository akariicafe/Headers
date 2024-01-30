@class NSMutableDictionary;

@interface RKLinguisticDataProvider : NSObject <RKPolarityDataProvider>

@property (retain) NSMutableDictionary *polarityMapsByLanguageID;

- (void).cxx_destruct;
- (id)init;

@end
