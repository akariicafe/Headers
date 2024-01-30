@class NSString, MFLock;
@protocol MFGuaranteedCollectingDataConsumer;

@interface MFMutableFilterDataConsumer : MFBaseFilterDataConsumer <MFGuaranteedCollectingDataConsumer> {
    id<MFGuaranteedCollectingDataConsumer> _mainConsumer;
    MFLock *_consumerLock;
    BOOL _isDone;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)data;
- (void)addDataConsumer:(id)a0;
- (id)initWithMainConsumer:(id)a0;
- (long long)appendData:(id)a0;
- (void)done;

@end
