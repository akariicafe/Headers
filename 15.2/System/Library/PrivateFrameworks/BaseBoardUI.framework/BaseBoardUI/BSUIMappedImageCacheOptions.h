@protocol BSPathProviding;

@interface BSUIMappedImageCacheOptions : NSObject <NSCopying> {
    id<BSPathProviding> _containerPathProvider;
}

@property (readonly, nonatomic) id<BSPathProviding> containerPathProvider;

+ (id)optionsWithContainerPathProvider:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
