@class NSString, MFDataHolder;

@interface MFZeroCopyDataConsumer : NSObject <MFGuaranteedCollectingDataConsumer> {
    MFDataHolder *_dataHolder;
    BOOL _done;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)data;
- (long long)appendData:(id)a0;
- (void)done;

@end
