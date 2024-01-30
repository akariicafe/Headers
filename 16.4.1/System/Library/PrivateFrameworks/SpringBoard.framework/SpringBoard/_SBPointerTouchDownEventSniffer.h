@class NSString, SBWindowScene;
@protocol _SBPointerTouchDownEventSnifferDelegate;

@interface _SBPointerTouchDownEventSniffer : NSObject <_SBEventSniffing>

@property (weak, nonatomic) id<_SBPointerTouchDownEventSnifferDelegate> delegate;
@property (weak, nonatomic) SBWindowScene *windowScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleEvent:(id)a0;
- (void).cxx_destruct;

@end
