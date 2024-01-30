@class NSString, NSArray, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface ASDBox : ASDObject {
    NSMutableArray *_audioDevices;
    NSObject<OS_dispatch_queue> *_deviceQueue;
    NSString *_boxName;
    BOOL _acquired;
    int _acquisitionFailure;
    BOOL _identify;
    NSObject<OS_dispatch_queue> *_acquireQueue;
}

@property (copy, nonatomic) NSString *boxName;
@property (readonly, copy, nonatomic) NSString *boxUID;
@property (copy, nonatomic) NSString *modelUID;
@property (copy, nonatomic) NSString *manufacturerName;
@property (copy, nonatomic) NSString *modelName;
@property (copy, nonatomic) NSString *serialNumber;
@property (copy, nonatomic) NSString *firmwareVersion;
@property (nonatomic) BOOL hasVideo;
@property (nonatomic) BOOL hasAudio;
@property (nonatomic) BOOL hasMIDI;
@property (nonatomic) BOOL requiresAuthentication;
@property (nonatomic) BOOL supportsIdentify;
@property (nonatomic) BOOL canSetIdentify;
@property (nonatomic, getter=isAcquireable) BOOL acquireable;
@property (nonatomic, getter=isAcquirable) BOOL acquirable;
@property (nonatomic) BOOL canChangeBoxName;
@property (nonatomic) BOOL acquired;
@property (nonatomic) int acquisitionFailure;
@property (nonatomic) BOOL identify;
@property (readonly, nonatomic) unsigned int transportType;
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *acquireQueue;
@property (readonly, retain, nonatomic) NSArray *devices;
@property (readonly, retain, nonatomic) NSArray *audioDevices;
@property (readonly, retain, nonatomic) NSMutableArray *clockDevices;

+ (id)keyPathsForValuesAffectingAcquireable;

- (void)systemWillSleep;
- (void).cxx_destruct;
- (unsigned int)objectClass;
- (unsigned int)transportType;
- (void)addDevice:(id)a0;
- (id)devices;
- (id)initWithPlugin:(id)a0;
- (BOOL)hasProperty:(const struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; } *)a0;
- (id)boxName;
- (void)removeDevice:(id)a0;
- (void)setBoxName:(id)a0;
- (id)diagnosticDescriptionWithIndent:(id)a0 walkTree:(BOOL)a1;
- (unsigned int)dataSizeForProperty:(const struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; } *)a0 withQualifierSize:(unsigned int)a1 andQualifierData:(const void *)a2;
- (BOOL)getProperty:(const struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; } *)a0 withQualifierSize:(unsigned int)a1 qualifierData:(const void *)a2 dataSize:(unsigned int *)a3 andData:(void *)a4 forClient:(int)a5;
- (id)driverClassName;
- (void)addAudioDevice:(id)a0;
- (void)removeAudioDevice:(id)a0;
- (void)systemHasPoweredOn;
- (void)addClockDevice:(id)a0;
- (void)removeClockDevice:(id)a0;
- (BOOL)isPropertySettable:(const struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; } *)a0;
- (BOOL)setProperty:(const struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; } *)a0 withQualifierSize:(unsigned int)a1 qualifierData:(const void *)a2 dataSize:(unsigned int)a3 andData:(const void *)a4 forClient:(int)a5;
- (id)acquireQueue;
- (BOOL)changeBoxName:(id)a0;
- (BOOL)acquireBox:(BOOL)a0 fromHAL:(BOOL)a1;
- (void)identifyBox:(BOOL)a0;
- (void)removeAllAudioDevices;
- (id)initWithBoxUID:(id)a0 withPlugin:(id)a1;
- (void)removeAllDevices;
- (void)removeAllClockDevices;
- (void)addDevicesToPlugin;
- (void)removeDevicesFromPlugin;
- (void)setAcquireable:(BOOL)a0;

@end
