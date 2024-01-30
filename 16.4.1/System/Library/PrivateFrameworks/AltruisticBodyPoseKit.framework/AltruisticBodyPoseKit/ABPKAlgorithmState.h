@interface ABPKAlgorithmState : NSObject

@property BOOL image_preprocessing;
@property BOOL detection2d;
@property BOOL lifting3d;
@property BOOL registration;
@property BOOL retargeting;

- (id)init;
- (id)toDict;

@end
