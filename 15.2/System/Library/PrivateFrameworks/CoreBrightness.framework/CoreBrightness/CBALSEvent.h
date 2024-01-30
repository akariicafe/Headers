@class NSObject;
@protocol OS_os_log;

@interface CBALSEvent : CBHIDEvent {
    struct __IOHIDEvent { } *_event;
    NSObject<OS_os_log> *_logHandle;
}

@property double illuminance;
@property struct { float XYZ[3]; struct { float x; float y; } xy; float CCT1; struct { int orientation; float rawChannels[6]; int nChannels; float brightness; } extra; } colorSample;
@property BOOL supportColor;
@property BOOL obstructed;
@property int orientation;
@property struct { unsigned int status; unsigned char nChannels; unsigned char orientation; unsigned short brightness; unsigned int integrationTime; unsigned int reportInterval; int gain; float lux; float rawLux; float channelData[6]; float CCT; short AZOffsets[6]; float temperature; unsigned int sensorTimestamp; int sensorType; unsigned short validNSamples; BOOL asyncMode; unsigned long long xtalkEstimate[6]; } vendorData;
@property float integrationTime;
@property BOOL firstALSSample;
@property BOOL colorMitigationTriggered;
@property float confidence;
@property float strength;

- (long long)compare:(id)a0;
- (id)description;
- (void)dealloc;
- (id)initWithHIDEvent:(struct __IOHIDEvent { } *)a0 andService:(struct __IOHIDServiceClient { } *)a1;
- (int)getServiceOrientation:(struct __IOHIDServiceClient { } *)a0;
- (struct { unsigned int x0; unsigned char x1; unsigned char x2; unsigned short x3; unsigned int x4; unsigned int x5; int x6; float x7; float x8; float x9[6]; float x10; short x11[6]; float x12; unsigned int x13; int x14; unsigned short x15; BOOL x16; unsigned long long x17[6]; })copyVendorDataFromEvent:(struct __IOHIDEvent { } *)a0;

@end
