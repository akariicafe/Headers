@class NSString;

@interface StockDataSource : NSObject

@property (nonatomic) long long identifier;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *sourceDescription;
@property (readonly, nonatomic) NSString *localizedSourceDescription;

- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)a0;
- (id)archiveDictionary;

@end
