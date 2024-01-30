@interface CommonPlist : NSObject {
    int allocatorType;
    int allowFallback;
    int compressionLevel;
}

- (id)init;
- (int)readPlist:(id)a0;

@end
