@class NSString, NSData;
@protocol MFGuaranteedCollectingDataConsumer;

@interface MFPartialNetworkDataConsumer : NSObject <MFDataConsumer> {
    id<MFGuaranteedCollectingDataConsumer> _rawDataConsumer;
    NSData *_strippedData;
    unsigned long long _length;
    unsigned char _seenNetworkLineEndings : 1;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)done;
- (void)purge;
- (long long)appendData:(id)a0;
- (unsigned long long)length;
- (id)init;
- (void)dealloc;
- (id)data;
- (id)copyDataWithUnixLineEndings;

@end
