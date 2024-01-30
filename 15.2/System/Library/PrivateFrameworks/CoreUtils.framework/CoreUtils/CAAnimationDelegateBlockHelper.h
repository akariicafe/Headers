@class NSString;

@interface CAAnimationDelegateBlockHelper : NSObject <CAAnimationDelegate>

@property (copy, nonatomic) id /* block */ animationDidStartBlock;
@property (copy, nonatomic) id /* block */ animationDidStopBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
