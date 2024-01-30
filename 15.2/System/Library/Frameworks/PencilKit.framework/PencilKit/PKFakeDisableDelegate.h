@class NSString;

@interface PKFakeDisableDelegate : NSObject <PKScribbleInteractionDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_shouldAttachForView:(id)a0;
+ (id)_infoInProcess;

- (BOOL)_scribbleInteraction:(id)a0 shouldBeginAtLocation:(struct CGPoint { double x0; double x1; })a1;

@end
