@class NSNumber, NSTimer;
@protocol MRUVolumeControllerCoordinationDelegate, MRUVolumeControllerDelegate;

@interface MRUVolumeController : MPVolumeController {
    NSTimer *_optimisticTimer;
    id<MRUVolumeControllerDelegate> _delegate;
}

@property (retain, nonatomic) NSNumber *optimisticValue;
@property (weak, nonatomic) id<MRUVolumeControllerCoordinationDelegate> coordinationDelegate;
@property (weak, nonatomic) id<MRUVolumeControllerDelegate> delegate;

- (void)setVolumeValue:(float)a0;
- (float)volumeValue;
- (void)setDelegate:(id)a0;
- (void)restoreDelegate;
- (id)description;
- (void).cxx_destruct;
- (void)beginEqualization;
- (void)finishEqualization;

@end
