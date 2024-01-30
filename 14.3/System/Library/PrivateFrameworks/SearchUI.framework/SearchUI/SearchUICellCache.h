@class NSCache, NSDate;

@interface SearchUICellCache : NSObject

@property (retain, nonatomic) NSCache *cellCache;
@property (retain, nonatomic) NSDate *lastCacheClearTime;

+ (id)sharedCache;

- (id)cellViewsForResults:(id)a0;
- (void)setCells:(id)a0 forResults:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (id)identifierForResults:(id)a0;

@end
