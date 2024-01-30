@class NSString;
@protocol RUIHeaderDelegate;

@interface BFFPaneHeaderView_RemoteUI : BFFPaneHeaderView <RUIHeader> {
    id<RUIHeaderDelegate> _rui_headerDelegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAttributes:(id)a0;
- (void).cxx_destruct;
- (void)setIconImage:(id)a0;
- (double)headerHeightForWidth:(double)a0 inView:(id)a1;
- (void)setSubHeaderText:(id)a0 attributes:(id)a1;
- (id)subHeaderLabel;
- (void)setDetailText:(id)a0 attributes:(id)a1;
- (void)setText:(id)a0 attributes:(id)a1;
- (void)setImageSize:(struct CGSize { double x0; double x1; })a0;
- (void)setDelegate:(id)a0;
- (id)headerLabel;
- (void)setImageAlignment:(int)a0;

@end
