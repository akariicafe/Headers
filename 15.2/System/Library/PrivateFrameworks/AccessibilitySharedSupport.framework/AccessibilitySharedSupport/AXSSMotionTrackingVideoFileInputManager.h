@class NSArray, NSMutableArray;
@protocol AXSSMotionTrackingVideoFileInputManagerDelegate;

@interface AXSSMotionTrackingVideoFileInputManager : NSObject

@property (class, readonly, nonatomic) BOOL allowVideoFileInput;

@property (nonatomic) BOOL _monitoring;
@property (retain, nonatomic) NSMutableArray *_videoFileInputNames;
@property (readonly, copy, nonatomic) NSArray *videoFileInputNames;
@property (weak, nonatomic) id<AXSSMotionTrackingVideoFileInputManagerDelegate> delegate;

- (void)startMonitoring;
- (void).cxx_destruct;
- (id)init;
- (void)stopMonitoring;
- (void)_update;
- (void)dealloc;
- (void)_videoFileInputNamesChanged:(id)a0;

@end
