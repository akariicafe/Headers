@class NSDictionary, WLKPlayable;

@interface WLKContentPlayResponse : NSObject

@property (readonly, copy, nonatomic) NSDictionary *dictionary;
@property (readonly, nonatomic) WLKPlayable *playable;

- (id)initWithDictionary:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
