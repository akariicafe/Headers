@class NSString;
@protocol SXScrollPositionRestoring;

@interface SXScrollPositionManager : NSObject <SXScrollPositionManager>

@property (weak, nonatomic) id<SXScrollPositionRestoring> scrollPositionRestoring;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)updateScrollPosition:(id)a0 animated:(BOOL)a1;

@end
