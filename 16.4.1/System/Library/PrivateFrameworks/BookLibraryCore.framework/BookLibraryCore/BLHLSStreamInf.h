@class NSURL, NSString;

@interface BLHLSStreamInf : NSObject

@property (retain, nonatomic) NSURL *url;
@property (readonly, nonatomic) unsigned long long bandwidth;
@property (readonly, nonatomic) unsigned long long averageBandwidth;
@property (readonly, nonatomic) unsigned long long averageBandwidthFallbackToPeak;
@property (readonly, nonatomic) NSString *codecs;
@property (readonly, nonatomic) NSString *audio;

- (id)description;
- (void).cxx_destruct;
- (void)setPropertiesFromAttributeList:(id)a0;

@end
