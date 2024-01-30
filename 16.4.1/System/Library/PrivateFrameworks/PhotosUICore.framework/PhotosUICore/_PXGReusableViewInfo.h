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

- (void)removeFromSuperViewInfo;
- (void)addHostedViewInfo:(id)a0;
- (id)initWithReusableView:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
