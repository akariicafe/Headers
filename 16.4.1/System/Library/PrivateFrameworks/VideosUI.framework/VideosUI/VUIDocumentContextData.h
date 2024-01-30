@class NSDictionary;

@interface VUIDocumentContextData : NSObject

@property (copy, nonatomic) NSDictionary *contextDataDict;

- (id)jsonData;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;

@end
