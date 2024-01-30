@class NSArray;

@interface TSDContentPath : NSObject

@property (copy, nonatomic) NSArray *contentLocations;

+ (id)contentPathWithLocations:(id)a0;

- (void)dealloc;
- (id)i_contentLocations;
- (id)contentLocationAtTime:(double)a0 withTimingFunction:(id)a1;

@end
