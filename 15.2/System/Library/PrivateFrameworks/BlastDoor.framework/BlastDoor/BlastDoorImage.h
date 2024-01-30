@interface BlastDoorImage : NSObject {
    void /* unknown type, empty encoding */ image;
}

@property (nonatomic, readonly) struct CGImage { } *cgImage;

- (id)dataUsingEncoding:(unsigned long long)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (BOOL)writeToURL:(id)a0 usingEncoding:(unsigned long long)a1 error:(id *)a2;

@end
