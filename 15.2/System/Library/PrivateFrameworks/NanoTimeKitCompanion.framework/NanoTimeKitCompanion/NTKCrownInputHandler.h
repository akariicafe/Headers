@class NSString;
@protocol NTKCrownInputHandlerDelegate;

@interface NTKCrownInputHandler : NSObject <NTKClockHardwareInput>

@property (weak, nonatomic) id<NTKCrownInputHandlerDelegate> delegate;
@property (nonatomic) BOOL useWideIdleCheck;
@property (nonatomic) double offsetPerRevolution;
@property (nonatomic) double progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)_wheelChangedWithEvent:(id)a0;
- (id)init;
- (BOOL)_handlePhysicalButton:(unsigned long long)a0 event:(unsigned long long)a1;
- (void)generateMajorDetents;
- (void)generateMinorDetents;

@end
