@class NSURL, FCHLSKey, FCHLSMap;

@interface FCHLSSegment : NSObject

@property (readonly, nonatomic) FCHLSMap *map;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) FCHLSKey *key;

- (void).cxx_destruct;
- (id)description;
- (id)initWithURL:(id)a0 duration:(double)a1 map:(id)a2 key:(id)a3;

@end
