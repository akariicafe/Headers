@class NSArray, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface MROutputContextDataSource : NSObject {
    NSObject<OS_dispatch_queue> *_notificationQueue;
}

@property (readonly, nonatomic) float volume;
@property (readonly, nonatomic) BOOL isAirPlaying;
@property (readonly, nonatomic) unsigned int volumeControlCapabilities;
@property (readonly, nonatomic) BOOL isMuted;
@property (readonly, nonatomic) NSArray *outputDevices;
@property (readonly, nonatomic) NSString *uniqueIdentifier;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue;
@property (nonatomic) BOOL shouldLog;

- (float)volumeForOutputDeviceUID:(id)a0 error:(id *)a1;
- (id)debugDescription;
- (BOOL)isMutedForOutputDevice:(id)a0 error:(id *)a1;
- (id)description;
- (id)outputDeviceForUID:(id)a0;
- (void).cxx_destruct;
- (unsigned int)volumeControlCapabilitiesForOutputDeviceUID:(id)a0 error:(id *)a1;

@end
