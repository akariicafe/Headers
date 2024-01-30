@class PXViewSpec, NSString, UIView;

@interface PXUIGenericViewTile : NSObject <PXUIViewBasicTile> {
    UIView *_view;
}

@property (retain, nonatomic, setter=_setSpec:) PXViewSpec *_spec;
@property (readonly, nonatomic) UIView *view;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
