@class NSDictionary, NSArray;

@interface WLKSiriSearchResponse : NSObject

@property (readonly, copy, nonatomic) NSDictionary *dictionary;
@property (readonly, copy, nonatomic) NSArray *items;

- (void).cxx_destruct;
- (id)init;
- (id)initWithDictionary:(id)a0;

@end
