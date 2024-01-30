@class NSString, PRSPosterSnapshot;

@interface PRSPosterSnapshotCollection : NSObject <BSXPCSecureCoding>

@property (readonly, nonatomic) PRSPosterSnapshot *primaryLayersSnapshot;
@property (readonly, nonatomic) PRSPosterSnapshot *floatingLayerSnapshot;
@property (readonly, nonatomic) double snapshotScale;
@property (readonly, nonatomic) long long interfaceStyle;
@property (readonly, nonatomic) long long accessibilityContrast;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;

@end
