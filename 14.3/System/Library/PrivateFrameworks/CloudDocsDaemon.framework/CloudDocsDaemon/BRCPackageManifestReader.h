@class NSError, PBMessageStreamReader, NSInputStream;

@interface BRCPackageManifestReader : NSEnumerator {
    NSInputStream *_stream;
    PBMessageStreamReader *_reader;
    NSError *_error;
}

@property (nonatomic) Class itemClass;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)error;
- (id)initWithInputStream:(id)a0;
- (id)initWithURL:(id)a0;
- (id)nextObject;
- (id)initWithAsset:(id)a0;
- (void)done;
- (id)initWithDeviceID:(int)a0 fileID:(unsigned long long)a1;

@end
