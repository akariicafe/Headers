@class NSString;

@interface PPMeCardCache : NSObject {
    NSString *_path;
}

- (id)initWithPath:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)loadMeCardCache;
- (BOOL)deleteMeCardCache;
- (id)_cachedDateComponentsFromDateComponents:(id)a0;
- (BOOL)writeMeCardCache:(id)a0;
- (id)_dateComponentsFromCachedDateComponents:(id)a0;

@end
