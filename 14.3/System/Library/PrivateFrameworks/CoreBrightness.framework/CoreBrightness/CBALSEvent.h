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
@property struct { unsigned int status; unsigned char nChannels; unsigned char orientation; unsigned short reserved; unsigned int integrationTime; unsigned int reportInterval; int gain; float lux; float channelData[6]; float CCT; short AZOffsets[6]; float temperature; } vendorData;
@property float integrationTime;
@property BOOL firstALSSample;

- (void)dealloc;
- (long long)compare:(id)a0;
- (id)description;
- (id)initWithHIDEvent:(struct __IOHIDEvent { } *)a0 andService:(struct __IOHIDServiceClient { } *)a1;
- (int)getServiceOrientation:(struct __IOHIDServiceClient { } *)a0;
- (struct { unsigned int x0; unsigned char x1; unsigned char x2; unsigned short x3; unsigned int x4; unsigned int x5; int x6; float x7; float x8[6]; float x9; short x10[6]; float x11; })copyVendorDataFromEvent:(struct __IOHIDEvent { } *)a0;

@end
