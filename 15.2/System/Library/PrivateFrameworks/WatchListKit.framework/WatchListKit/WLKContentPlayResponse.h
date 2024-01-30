@class NSDictionary, WLKPlayable;

@interface WLKContentPlayResponse : NSObject

@property (readonly, copy, nonatomic) NSDictionary *dictionary;
@property (readonly, nonatomic) WLKPlayable *playable;

- (void).cxx_destruct;
- (id)init;
- (id)initWithDictionary:(id)a0;

@end
