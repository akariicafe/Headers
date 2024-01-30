@class PHASESource, PHASEListener;

@interface PHASEMixerParameterEntry : NSObject

@property (nonatomic) long long mixerType;
@property (retain, nonatomic) PHASESource *source;
@property (retain, nonatomic) PHASEListener *listener;

- (void).cxx_destruct;
- (id)init;

@end
