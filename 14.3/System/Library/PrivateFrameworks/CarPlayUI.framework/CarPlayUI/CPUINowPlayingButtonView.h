@class NSString, CAStateController, CALayer, NSMutableArray;

@interface CPUINowPlayingButtonView : UIView <CAMLParserDelegate> {
    CALayer *_animatedGlyphLayer;
    CAStateController *_stateController;
    NSMutableArray *_barLayers;
    CALayer *_platterLayer;
}

@property (copy, nonatomic) NSString *stateName;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (nonatomic) unsigned int playbackState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)classSubstitions;

- (void).cxx_destruct;
- (void)_handleGlyphLayerDidLoad:(id)a0;
- (void)layoutSubviews;
- (Class)CAMLParser:(id)a0 didFailToFindClassWithName:(id)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void)_updateColors;
- (id)initWithCAML:(id)a0;

@end
