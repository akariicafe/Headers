@interface BlastDoorImage : NSObject {
    void /* unknown type, empty encoding */ image;
}

@property (nonatomic, readonly) struct CGImage { } *cgImage;

- (id)init;
- (void).cxx_destruct;
- (id)dataUsingEncoding:(unsigned long long)a0 error:(id *)a1;
- (BOOL)writeToURL:(id)a0 usingEncoding:(unsigned long long)a1 error:(id *)a2;

@end
