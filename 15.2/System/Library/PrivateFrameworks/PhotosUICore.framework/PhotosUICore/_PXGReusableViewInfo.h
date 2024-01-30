@class NSArray, CALayer, NSMutableArray;
@protocol PXGInternalReusableView;

@interface _PXGReusableViewInfo : NSObject {
    NSMutableArray *_hostedViewInfos;
}

@property (nonatomic) double rotation;
@property (nonatomic) double scale;
@property (nonatomic) struct CGPoint { double x; double y; } anchorPoint;
@property (retain, nonatomic) CALayer *layer;
@property (retain, nonatomic) id<PXGInternalReusableView> view;
@property (weak, nonatomic) _PXGReusableViewInfo *hostingViewInfo;
@property (readonly, nonatomic) NSArray *hostedViewInfos;

- (id)description;
- (void)addHostedViewInfo:(id)a0;
- (void).cxx_destruct;
- (void)removeFromSuperViewInfo;
- (id)initWithReusableView:(id)a0;

@end
