@protocol BSPathProviding;

@interface BSUIMappedImageCacheOptions : NSObject <NSCopying> {
    id<BSPathProviding> _containerPathProvider;
}

@property (readonly, nonatomic) id<BSPathProviding> containerPathProvider;

+ (id)optionsWithContainerPathProvider:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
