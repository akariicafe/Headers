@class NSArray;

@interface AMDModelAssetsMetadata : NSObject

@property (retain, nonatomic) NSArray *dictionaryIds;

- (BOOL)isValid;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)getDictionaryIds;

@end
