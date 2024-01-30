@class UIScreen, NSMutableDictionary, AXUIClient, NSString;

@interface SSAnnotationRenderer : NSObject <AXUIClientDelegate> {
    int assistanceState;
}

@property (retain, nonatomic) AXUIClient *uiClient;
@property (retain) NSMutableDictionary *queuedMessage;
@property (retain) UIScreen *mainScreen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedRenderer;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)screenDidChange:(id)a0;
- (struct CGPoint { double x0; double x1; })convertScaledCoordinates:(struct CGPoint { double x0; double x1; })a0;
- (void)drawPointerWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 flags:(unsigned int)a1;
- (void)drawSafeViewSlateWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 flags:(unsigned int)a1;
- (BOOL)showPointerForUser:(id)a0 location:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)hidePointerForUser:(id)a0;
- (BOOL)hideAllPointers;
- (BOOL)showAllPointers;
- (void)stopAnnotation;
- (void)handleSafeViewAnnotation:(struct CGPoint { double x0; double x1; })a0 flags:(unsigned int)a1 orientation:(long long)a2;

@end
