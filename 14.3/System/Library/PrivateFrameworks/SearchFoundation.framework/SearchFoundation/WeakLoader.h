@protocol SFResourceLoader;

@interface WeakLoader : NSObject {
    id<SFResourceLoader> _weakLoader;
}

@property (readonly, nonatomic) id<SFResourceLoader> strongloader;

- (void).cxx_destruct;
- (id)initWithLoader:(id)a0;

@end
