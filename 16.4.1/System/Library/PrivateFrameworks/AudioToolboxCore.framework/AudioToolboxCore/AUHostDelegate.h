@class AUAudioUnit, NSObject;
@protocol OS_dispatch_queue;

@interface AUHostDelegate : NSObject <AUAudioUnitHostProtocol> {
    NSObject<OS_dispatch_queue> *mParameterQueue;
}

@property (weak, nonatomic) AUAudioUnit *audioUnit;

- (void)syncParameter:(unsigned long long)a0 value:(float)a1 extOriginator:(unsigned long long)a2 hostTime:(unsigned long long)a3 eventType:(unsigned int)a4;
- (void)MIDICIProfileChanged:(unsigned char)a0 channel:(unsigned char)a1 profile:(id)a2 enabled:(BOOL)a3;
- (id)init;
- (void)speechSynthesisMetadataAvailable:(id)a0 speechRequest:(id)a1;
- (void)propertiesChanged:(id)a0;
- (void).cxx_destruct;

@end
