@class NSString;
@protocol PXVisualDiagnosticsProvider;

@interface PXVisualDiagnosticsConfiguration : NSObject <PXTapToRadarDiagnosticProvider, NSCopying>

@property (retain, nonatomic) id<PXVisualDiagnosticsProvider> rootProvider;
@property (nonatomic) struct CGSize { double width; double height; } defaultPageSize;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL isPrivateDataAllowed;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)collectTapToRadarDiagnosticsIntoContainer:(id)a0;
- (id)initWithRootProvider:(id)a0;

@end
