@class NSMutableDictionary;
@protocol OKMediaManagerDelegate;

@interface OKMediaManager : NSObject {
    NSMutableDictionary *_mediaSourcesByScheme;
}

@property (nonatomic) id<OKMediaManagerDelegate> delegate;

+ (id)defaultManager;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)init;
- (void)addMediaItemClass:(Class)a0;
- (Class)mediaItemClassForURL:(id)a0;
- (id)mediaItemForURL:(id)a0;
- (id)mediaItemsForURLs:(id)a0;
- (id)mediaURLForMediaObject:(id)a0;
- (id)mediaURLsForMediaObjects:(id)a0;
- (void)removeMediaItemClass:(Class)a0;

@end
