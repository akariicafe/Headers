@class NSArray;

@interface TSDContentPath : NSObject

@property (copy, nonatomic) NSArray *contentLocations;

+ (id)contentPathWithLocations:(id)a0;

- (void)dealloc;
- (id)contentLocationAtTime:(double)a0 withTimingFunction:(id)a1;
- (id)i_contentLocations;

@end
