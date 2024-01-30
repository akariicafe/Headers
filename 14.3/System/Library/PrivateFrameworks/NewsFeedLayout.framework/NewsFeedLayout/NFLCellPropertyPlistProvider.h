@class NSMutableDictionary;

@interface NFLCellPropertyPlistProvider : NSObject

@property (retain, nonatomic) NSMutableDictionary *plistsByName;

- (id)init;
- (void).cxx_destruct;
- (id)plistWithName:(id)a0;

@end
