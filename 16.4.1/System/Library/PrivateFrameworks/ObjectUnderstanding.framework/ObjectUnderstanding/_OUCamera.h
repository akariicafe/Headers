@interface _OUCamera : NSObject <OUCamera>

@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[3]; } intrinsics;
@property (nonatomic) struct CGSize { double width; double height; } imageResolution;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } pose;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } transform;

- (id)initWithDictionary:(id)a0;

@end
