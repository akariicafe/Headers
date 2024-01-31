@interface CloudKit.ChunkStreamHandle : NSObject {
    void /* unknown type, empty encoding */ downloadURL;
    void /* unknown type, empty encoding */ key;
    void /* unknown type, empty encoding */ signature;
    void /* unknown type, empty encoding */ chunkReader;
    void /* unknown type, empty encoding */ range;
}

- (id)init;
- (void).cxx_destruct;

@end
