@class NSDictionary;

@interface VUIDocumentPreFetchedData : NSObject

@property (copy, nonatomic) NSDictionary *prefetchedDataDict;

- (id)jsonData;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;

@end
