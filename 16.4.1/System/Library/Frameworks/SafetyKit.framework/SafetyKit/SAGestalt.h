@interface SAGestalt : NSObject

@property (class, readonly, nonatomic) BOOL inAirplaneMode;
@property (class, readonly, nonatomic) BOOL deviceSupportsKappa;
@property (class, readonly, nonatomic) BOOL isProductionFused;
@property (class, readonly, nonatomic) BOOL isInternalBuild;

@end
