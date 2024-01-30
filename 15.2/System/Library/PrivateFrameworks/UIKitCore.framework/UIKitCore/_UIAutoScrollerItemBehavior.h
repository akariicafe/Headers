@class NSString;

@interface _UIAutoScrollerItemBehavior : NSObject <_UIAutoScrollBehavior>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct { struct CGPoint { double x0; double x1; } x0; unsigned long long x1; })offsetForAutoScroller:(id)a0 timeDelta:(double)a1;

@end
