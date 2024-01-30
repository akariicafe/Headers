@class NSDictionary, NSArray;

@interface TVPlaylist : NSObject

@property (nonatomic) long long endAction;
@property (nonatomic) long long repeatMode;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (readonly, copy, nonatomic) NSArray *mediaItems;

- (void)addObject:(id)a0;
- (void)removeObjectsAtIndexes:(id)a0;
- (void)insertObjects:(id)a0 atIndexes:(id)a1;
- (void).cxx_destruct;

@end
