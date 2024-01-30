@class NSString;

@interface AKLongPressGestureRecognizer : UILongPressGestureRecognizer <AKPenDetectionGestureRecognizerProtocol>

@property (nonatomic) BOOL penGestureDetected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)reset;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)_checkTouchesForStylus:(id)a0;

@end
