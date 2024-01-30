@class NSString;

@interface SUDeferredUISearchField : UISearchField <SUDeferredUIView> {
    long long _deferredClearButtonMode;
    id _deferredFont;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _deferredFrame;
    float _deferredPaddingLeft;
    float _deferredPaddingTop;
    NSString *_deferredPlaceholder;
    NSString *_deferredText;
    BOOL _isDeferringInterfaceUpdates;
}

@property (nonatomic, getter=isDeferringInterfaceUpdates) BOOL deferringInterfaceUpdates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)placeholder;
- (void)setPlaceholder:(id)a0;
- (id)font;
- (id)text;
- (void)dealloc;
- (void)setFont:(id)a0;
- (long long)clearButtonMode;
- (void)setPaddingTop:(float)a0 paddingLeft:(float)a1;
- (float)paddingTop;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setText:(id)a0;
- (void)setClearButtonMode:(long long)a0;
- (float)paddingLeft;
- (void)_saveCurrentStateAsDeferred;
- (void)_commitDeferredInterfaceUpdates;

@end
