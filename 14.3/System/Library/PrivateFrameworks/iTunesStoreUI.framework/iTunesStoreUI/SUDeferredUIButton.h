@class NSString, NSMutableDictionary;

@interface SUDeferredUIButton : UIButton <SUDeferredUIView> {
    BOOL _deferredEnabled;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _deferredFrame;
    NSMutableDictionary *_deferredImages;
    NSMutableDictionary *_deferredTitles;
    BOOL _isDeferringInterfaceUpdates;
}

@property (nonatomic, getter=isDeferringInterfaceUpdates) BOOL deferringInterfaceUpdates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)titleForState:(unsigned long long)a0;
- (void)dealloc;
- (void)setImage:(id)a0 forState:(unsigned long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)imageForState:(unsigned long long)a0;
- (void)setTitle:(id)a0 forState:(unsigned long long)a1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setEnabled:(BOOL)a0;
- (BOOL)isEnabled;
- (void)_saveCurrentStateAsDeferred;
- (void)_commitDeferredInterfaceUpdates;
- (void)_saveImagesAsDeferred;
- (void)_saveTitlesAsDeferred;

@end
