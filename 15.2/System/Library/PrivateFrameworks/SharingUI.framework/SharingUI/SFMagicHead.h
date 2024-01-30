@class NSUUID, UIView, SFPersonImageView, NSArray, SFMagicHeadShadowView, UIAirDropNode, SFMagicHeadSettings, NSObject, NSProgress, SFAirDropNode, SFCircleProgressView;
@protocol SFMagicHeadDelegate;

@interface SFMagicHead : UIView {
    double _containerRadius;
    UIView *_contentView;
    SFMagicHeadShadowView *_shadowView;
    SFPersonImageView *_imageView;
    SFCircleProgressView *_circleProgressView;
    NSArray *_progressKeyPaths;
    long long _cellState;
    BOOL _isMagicHead;
}

@property (readonly, nonatomic) UIView *imageSlotView;
@property (weak) NSObject<SFMagicHeadDelegate> *delegate;
@property (retain, nonatomic) SFMagicHeadSettings *settings;
@property (readonly) SFAirDropNode *node;
@property (readonly) UIAirDropNode *slotNode;
@property (readonly, nonatomic) NSUUID *nodeIdentifier;
@property (nonatomic) BOOL highlighted;
@property (readonly) double degreeOffset;
@property BOOL pointedAt;
@property (nonatomic) long long size;
@property (nonatomic) long long position;
@property BOOL stateBeingRestored;
@property (retain, nonatomic) NSProgress *progress;

- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (void)userDidCancel;
- (id)initWithNode:(id)a0 slotNode:(id)a1 containerRadius:(double)a2 delegate:(id)a3 settings:(id)a4;
- (void)setPositionDegreeOffsetWithOffset:(double)a0;
- (void)resetTransferState;
- (void)userDidSelect;
- (void)removeObserverOfValuesForKeyPaths:(id)a0 ofObject:(id)a1;
- (void)addObserverOfValuesForKeyPaths:(id)a0 ofObject:(id)a1;
- (void)triggerKVOForKeyPaths:(id)a0 ofObject:(id)a1;
- (void)setCellState:(long long)a0 animated:(BOOL)a1 silent:(BOOL)a2;
- (void)handleKVOUpdateForProgress:(id)a0 keyPath:(id)a1;
- (void)setPosition:(long long)a0 withOffset:(double)a1;

@end
