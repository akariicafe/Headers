@interface MDLStereoscopicCamera : MDLCamera

@property (nonatomic) float interPupillaryDistance;
@property (nonatomic) float leftVergence;
@property (nonatomic) float rightVergence;
@property (nonatomic) float overlap;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ x0[4]; } leftViewMatrix;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ x0[4]; } rightViewMatrix;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ x0[4]; } leftProjectionMatrix;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ x0[4]; } rightProjectionMatrix;

- (id)init;

@end
