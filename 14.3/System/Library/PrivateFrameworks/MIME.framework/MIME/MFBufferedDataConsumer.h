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

- (id)init;
- (id)data;
- (void)dealloc;
- (long long)appendData:(id)a0;
- (void)done;

@end
