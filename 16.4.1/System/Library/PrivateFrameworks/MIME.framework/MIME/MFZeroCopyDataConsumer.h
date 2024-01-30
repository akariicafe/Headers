@class NSString, MFDataHolder;

@interface MFZeroCopyDataConsumer : NSObject <MFGuaranteedCollectingDataConsumer> {
    MFDataHolder *_dataHolder;
    BOOL _done;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)appendData:(id)a0;
- (id)data;
- (void)done;
- (id)init;
- (void).cxx_destruct;

@end
