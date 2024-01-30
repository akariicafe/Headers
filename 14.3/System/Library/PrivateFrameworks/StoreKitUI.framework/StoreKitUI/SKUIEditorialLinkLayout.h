@class NSArray, NSString;

@interface SKUIEditorialLinkLayout : NSObject <SKUICachedLayout> {
    struct CGSize { double x0; double x1; } *_sizes;
}

@property (readonly, nonatomic) NSArray *links;
@property (readonly, nonatomic) struct CGSize { double width; double height; } totalSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (void)enumerateLinesUsingBlock:(id /* block */)a0;
- (id)initWithLayoutRequest:(id)a0;
- (struct CGSize { double x0; double x1; })sizeForLinkAtIndex:(long long)a0;

@end
