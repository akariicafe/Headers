@class NSString;
@protocol VKLabelNavFeature;

@interface VKLabelNavRoadLabel : NSObject {
    int _navLabelType;
    NSString *_displayGroup;
    BOOL _isPicked;
}

@property (nonatomic) id<VKLabelNavFeature> navFeature;
@property (readonly, nonatomic) struct shared_ptr<md::NavLabel> { struct NavLabel *__ptr_; struct __shared_weak_count *__cntrl_; } label;
@property (nonatomic) unsigned char alignment;
@property (nonatomic) float desiredOffsetDistance;
@property (nonatomic) unsigned int displayID;
@property (readonly, nonatomic) BOOL isShieldLabel;
@property (readonly, nonatomic) BOOL isRoadLabel;
@property (readonly, nonatomic) BOOL isJunctionLabel;
@property (readonly, nonatomic) BOOL isManeuverLabel;
@property (readonly, nonatomic) BOOL isEtaLabel;
@property (readonly, nonatomic) BOOL isTrafficCameraLabel;
@property (nonatomic) unsigned short renderOrder;
@property (nonatomic) struct Mercator2<double> { double _e[2]; } mercatorPoint;

- (id)displayGroup;
- (id)description;
- (void).cxx_destruct;
- (void)layoutWithNavContext:(struct NavContext { void /* function */ **x0; struct LabelManager *x1; struct MapNavLabeler *x2; struct LabelLayoutContext *x3; struct LabelNavLayoutContext *x4; } *)a0;
- (void)dealloc;
- (id).cxx_construct;
- (id)initWithNavFeature:(id)a0 label:(const void *)a1 navLabelType:(int)a2;

@end
