@class NSString, MFDataHolder;

@interface MFZeroCopyDataConsumer : NSObject <MFGuaranteedCollectingDataConsumer> {
    MFDataHolder *_dataHolder;
    BOOL _done;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)done;
- (long long)appendData:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)data;

@end
