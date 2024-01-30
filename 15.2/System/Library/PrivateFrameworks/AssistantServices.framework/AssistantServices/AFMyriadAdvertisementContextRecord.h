@class NSData, NSUUID;

@interface AFMyriadAdvertisementContextRecord : NSObject

@property (readonly, nonatomic) unsigned char advertisementContextVersion;
@property (readonly, nonatomic) long long advertisementRecordType;
@property (readonly, nonatomic) double voiceTriggerEndTime;
@property (readonly, copy, nonatomic) NSData *advertisementPayload;
@property (readonly, copy, nonatomic) NSUUID *deviceID;
@property (nonatomic) double advertisementDispatchTime;

- (id)description;
- (void).cxx_destruct;
- (void)_initializeMyriadAdvertisementContextRecordFromData:(id)a0;
- (unsigned long long)_advertismentPayloadSizeForVersion:(unsigned char)a0;
- (id)_deviceIDFromBytes:(const unsigned char[16] *)a0;
- (char)_getAdvertismentRecordTypeForVersion:(unsigned char)a0 data:(id)a1;
- (double)_getVoiceTriggerEndTimeForVersion:(unsigned char)a0 data:(id)a1;
- (id)_getMyriadAdvertisementDataForVersion:(unsigned char)a0 data:(id)a1;
- (id)recordForDeviceId:(id)a0;
- (id)_getDeviceIdForVersion:(unsigned char)a0 data:(id)a1;
- (id)initWithAdvertisementRecordType:(long long)a0 voiceTriggerEndTime:(double)a1 advertisementPayload:(id)a2 deviceID:(id)a3;
- (id)initWithMyriadAdvertisementContextRecordData:(id)a0;
- (id)myriadAdvertisementContextAsData;
- (BOOL)isSaneForVoiceTriggerEndTime:(double)a0 endtimeDistanceThreshold:(double)a1;
- (BOOL)compareAdvertisementPayload:(id)a0;

@end
