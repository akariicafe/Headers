@class NSMutableArray;

@interface HUComfortSoundsShuffler : NSObject {
    unsigned long long _index;
    NSMutableArray *_array;
}

+ (id)shufflerWithArray:(id)a0;

- (id)nextObject;
- (id)initWithArray:(id)a0;
- (id)debugDescription;
- (id)description;
- (void).cxx_destruct;
- (void)shuffle;

@end
