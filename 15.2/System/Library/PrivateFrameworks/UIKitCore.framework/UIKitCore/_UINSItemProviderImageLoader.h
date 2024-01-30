@class NSProgress, NSString, NSItemProvider;

@interface _UINSItemProviderImageLoader : _UIImageLoader {
    NSItemProvider *_itemProvider;
    NSString *_typeIdentifier;
}

@property (retain, setter=_setProgress:) NSProgress *_progress;

- (void)_really_loadImage:(id /* block */)a0;
- (id)initWithItemProvider:(id)a0 typeIdentifier:(id)a1;
- (BOOL)_really_cancel;
- (void).cxx_destruct;

@end
