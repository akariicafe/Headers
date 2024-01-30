@class NSArray, NSDictionary;

@interface AMDModelAssetsMetadata : NSObject

@property (retain, nonatomic) NSArray *dictionaryIds;
@property (retain, nonatomic) NSDictionary *bitmasks;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (BOOL)isValid;
- (id)getBitmasks;
- (id)getDictionaryIds;

@end
