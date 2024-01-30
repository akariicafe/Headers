@class NSDictionary, NSArray;

@interface WLKSearchWatchListResponse : NSObject

@property (readonly, copy, nonatomic) NSDictionary *dictionary;
@property (readonly, copy, nonatomic) NSArray *items;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
