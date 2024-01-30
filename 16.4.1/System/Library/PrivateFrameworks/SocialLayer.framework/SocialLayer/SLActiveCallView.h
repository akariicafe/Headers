@class SLActiveCallViewSwift;
@protocol SLActiveCallViewDelegate;

@interface SLActiveCallView : UIView <SLActiveCallViewDelegateSwift>

@property (retain, nonatomic) SLActiveCallViewSwift *representedObject;
@property (weak, nonatomic) id<SLActiveCallViewDelegate> delegate;
@property (readonly, nonatomic) BOOL remoteContentIsLoaded;
@property (nonatomic) BOOL remoteRenderingEnabled;
@property (nonatomic) double maxWidth;
@property (readonly, nonatomic) BOOL hasActiveCall;

- (id)init;
- (void).cxx_destruct;
- (void)activeCallViewDidDetectActiveCallChange:(id)a0;
- (void)activeCallViewDidLoadNewRemoteContent:(id)a0;
- (id)initWithMaxWidth:(double)a0;

@end
