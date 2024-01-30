@class NSString, PXTilingControllerDebugInfo;

@interface PXTilingDebugUIView : UIView <PXTilingDebugDelegate> {
    double _debugWidth;
}

@property (retain, nonatomic, setter=_setDebugInfo:) PXTilingControllerDebugInfo *_debugInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
