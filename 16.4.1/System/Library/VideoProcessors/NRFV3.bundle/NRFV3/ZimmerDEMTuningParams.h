@interface ZimmerDEMTuningParams : NSObject

@property (readonly, nonatomic) struct { float antiMazingThresh1; float antiMazingThresh2; float antiMazingGain; } config;

- (int)readPlist:(id)a0;

@end
