@class NSString, PKInkParticleDescriptor;

@interface PKInkRenderingDescriptor : NSObject

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long version;
@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long blendMode;
@property (nonatomic) BOOL animating;
@property (retain, nonatomic) PKInkParticleDescriptor *particleDescriptor;

- (void).cxx_destruct;

@end
