@class NSString;

@interface UITextDragFinishState : NSObject <UITextDragFinishState>

@property (nonatomic) BOOL dragTearoffOccured;
@property (nonatomic) struct CGPoint { double x; double y; } location;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
