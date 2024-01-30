@class AVConferenceXPCClient, NSString, NSMutableDictionary, VCCellularAudioTap, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface VCAudioPowerSpectrumManager : NSObject <VCAudioPowerSpectrumMeterDelegate, VCServerDelegate> {
    AVConferenceXPCClient *_connection;
    NSObject<OS_dispatch_queue> *_xpcCommandQueue;
    NSMutableDictionary *_cellularTapTypeToStreamTokenMap;
    NSMutableDictionary *_powerSpectrumMetersForCellularTapType;
    VCCellularAudioTap *_cellularAudioTap;
}

@property (readonly, nonatomic) NSMutableArray *meters;
@property (readonly, nonatomic) NSMutableDictionary *sources;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)registerBlocksForService;
- (void)deregisterBlocksForService;
- (void)dealloc;
- (id)init;
- (void)audioPowerSpectrumMeter:(id)a0 didUpdateAudioPowerSpectrums:(id)a1;
- (BOOL)unregisterListenerWithCellularTapType:(id)a0 powerSpectrumMeter:(id)a1 error:(id *)a2;
- (void)cleanupPowerSpectrumSetForCellularTapType:(id)a0;
- (void)didServerDie;
- (id)newPowerSpectrumMeterWithBinCount:(unsigned short)a0 refreshRate:(double)a1 delegate:(id)a2 error:(id *)a3;
- (id)powerSpectrumMetersForCellularTapType:(id)a0;
- (void)registerAudioPowerMeterSource:(id)a0;
- (BOOL)registerListenerWithCellularTapType:(id)a0 clientProcessId:(id)a1 powerSpectrumMeter:(id)a2 powerSpectrumMeterKey:(id)a3 error:(id *)a4;
- (BOOL)registerListenerWithStreamToken:(id)a0 powerSpectrumKey:(id)a1 powerSpectrumMeter:(id)a2 error:(id *)a3;
- (id)registerStreamTokenForCellularTapType:(id)a0 clientProcessId:(int)a1 error:(id *)a2;
- (id)serviceHandlerPowerMeterInitializeWithArguments:(id)a0 error:(id *)a1;
- (id)serviceHandlerPowerMeterTerminateWithArguments:(id)a0 error:(id *)a1;
- (id)serviceHandlerRegisterCellularTapWithArguments:(id)a0 error:(id *)a1;
- (id)serviceHandlerRegisterListenerWithArguments:(id)a0 error:(id *)a1;
- (id)serviceHandlerUnregisterCellularTagWithArguments:(id)a0 error:(id *)a1;
- (id)serviceHandlerUnregisterListenerWithArguments:(id)a0 error:(id *)a1;
- (void)terminatePowerSpectrumMeter:(id)a0;
- (void)unregisterAudioPowerSpectrumSourceForStreamToken:(id)a0;
- (BOOL)unregisterListenerWithStreamToken:(id)a0 powerSpectrumMeter:(id)a1 error:(id *)a2;

@end
