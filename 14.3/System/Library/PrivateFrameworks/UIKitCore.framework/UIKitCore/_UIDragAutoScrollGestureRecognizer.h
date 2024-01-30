@class NSString;

@interface _UIDragAutoScrollGestureRecognizer : UIDragGestureRecognizer <_UIDragEventRespondable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canBePreventedByGestureRecognizer:(id)a0;
- (void)_draggingEnteredWithEvent:(id)a0;
- (void)_draggingEndedWithEvent:(id)a0;
- (BOOL)shouldReceiveEvent:(id)a0;
- (BOOL)canPreventGestureRecognizer:(id)a0;
- (void)_draggingUpdatedWithEvent:(id)a0;
- (void)_draggingExitedWithEvent:(id)a0;

@end
