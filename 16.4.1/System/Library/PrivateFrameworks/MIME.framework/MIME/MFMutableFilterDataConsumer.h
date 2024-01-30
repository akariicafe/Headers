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

- (long long)appendData:(id)a0;
- (id)data;
- (void)done;
- (void).cxx_destruct;
- (void)addDataConsumer:(id)a0;
- (id)initWithMainConsumer:(id)a0;

@end
