@class NSArray, NSString;

@interface MROutputContextDataSource : NSObject

@property (readonly, nonatomic) float volume;
@property (readonly, nonatomic) BOOL isAirPlaying;
@property (readonly, nonatomic) unsigned int volumeControlCapabilities;
@property (readonly, nonatomic) NSArray *outputDevices;
@property (readonly, nonatomic) NSString *uniqueIdentifier;

- (id)outputDeviceForUID:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
