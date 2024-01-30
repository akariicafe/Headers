@class NSString, NSMutableData;

@interface MFBufferedDataConsumer : NSObject <MFGuaranteedCollectingDataConsumer> {
    NSMutableData *_data;
    int _fd;
    NSString *_path;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)done;
- (long long)appendData:(id)a0;
- (id)init;
- (void)dealloc;
- (id)data;

@end
