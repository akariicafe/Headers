@class NSDictionary, NSArray;

@interface WLKSiriSearchResponse : NSObject

@property (readonly, copy, nonatomic) NSDictionary *dictionary;
@property (readonly, copy, nonatomic) NSArray *items;

- (id)initWithDictionary:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
