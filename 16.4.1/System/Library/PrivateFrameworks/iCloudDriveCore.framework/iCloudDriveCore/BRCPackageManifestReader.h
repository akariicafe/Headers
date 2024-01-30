@class NSError, PBMessageStreamReader, NSInputStream;

@interface BRCPackageManifestReader : NSEnumerator {
    NSInputStream *_stream;
    PBMessageStreamReader *_reader;
    NSError *_error;
}

@property (nonatomic) Class itemClass;

- (id)initWithURL:(id)a0;
- (id)nextObject;
- (id)initWithAsset:(id)a0;
- (void)done;
- (void)dealloc;
- (id)error;
- (id)init;
- (void).cxx_destruct;
- (id)initWithInputStream:(id)a0;
- (id)initWithDeviceID:(int)a0 fileID:(unsigned long long)a1;

@end
