@class NSString, NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface _GCLogitechRacingWheel : GCRacingWheel <_GCGamepadEventSource> {
    struct __IOHIDDevice { } *_device;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _isOpen;
    int _mode;
    union { struct LogitechWheelG920Report { unsigned char reportID; unsigned char dpad : 4; unsigned char buttonA : 1; unsigned char buttonB : 1; unsigned char buttonX : 1; unsigned char buttonY : 1; unsigned char rightPaddle : 1; unsigned char leftPaddle : 1; unsigned char buttonMenu : 1; unsigned char buttonView : 1; unsigned char buttonRSB : 1; unsigned char buttonLSB : 1; unsigned char buttonLogo : 1; unsigned char shifter : 7; unsigned char unused : 2; unsigned short wheel; unsigned char pedalGas : 8; unsigned char pedalBrake : 8; unsigned char pedalClutch : 8; unsigned char vendor1 : 1; unsigned char vendor2 : 1; unsigned char vendor3 : 1; unsigned char unused2 : 5; } g920; struct LogitechWheelG29ClassicReport { unsigned char dpad : 4; unsigned char buttonX : 1; unsigned char buttonSquare : 1; unsigned char buttonCircle : 1; unsigned char buttonTriangle : 1; unsigned char rightPaddle : 1; unsigned char leftPaddle : 1; unsigned char buttonR2 : 1; unsigned char buttonL2 : 1; unsigned char buttonShare : 1; unsigned char buttonOptions : 1; unsigned char buttonR3 : 1; unsigned char buttonL3 : 1; unsigned char shifter : 7; unsigned char buttonPlus : 1; unsigned char buttonMinus : 1; unsigned char dialRight : 1; unsigned char dialLeft : 1; unsigned char buttonReturn : 1; unsigned char buttonLogo : 1; unsigned char unused : 3; unsigned short wheel; unsigned char pedalGas : 8; unsigned char pedalBrake : 8; unsigned char pedalClutch : 8; unsigned char vendor1[2]; unsigned char vendor2; } g29Classic; unsigned char raw[64]; } _report;
    NSArray *_eventObservers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithService:(unsigned int)a0;
- (BOOL)isAcquired;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)acquireDeviceWithError:(id *)a0;
- (id)observeGamepadEvents:(id /* block */)a0;
- (void)relinquishDevice;

@end
