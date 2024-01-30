@class NSMutableArray;

@interface AVTUIStickerPlaceholderProviderFactory : NSObject

@property (retain, nonatomic) NSMutableArray *queuedHandlers;
@property (readonly, nonatomic) id /* block */ imageProvider;

- (id /* block */)placeholderProvider;
- (void).cxx_destruct;
- (id)initWithImageProvider:(id /* block */)a0;

@end
