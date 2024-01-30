@class NSArray, PXGLayout;

@interface PXGRectDiagnosticsLayer : CALayer

@property (class, readonly, nonatomic) NSArray *defaultRectDiagnosticsProviders;

@property (retain, nonatomic) PXGLayout *layout;
@property (copy, nonatomic) NSArray *rectDiagnosticsProviders;

- (void)update;
- (void).cxx_destruct;

@end
