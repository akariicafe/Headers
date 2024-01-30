@class NSString;

@interface OrientationInfo : NSObject <AltAspect>

@property (nonatomic) double altAspect;
@property (nonatomic) BOOL isRotated;
@property (nonatomic) unsigned int inputID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
