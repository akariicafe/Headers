@class NSString;

@interface FPDSubtreeChangeDetector : NSObject {
    int _fd;
    NSString *_path;
    unsigned long long _fileID;
    unsigned long long _genCount;
}

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)initAtPath:(id)a0 error:(id *)a1;
- (BOOL)maintainDirstatWithError:(id *)a0;
- (unsigned long long)retrieveDirstatGenCountWithError:(id *)a0;
- (unsigned long long)retrieveFileIDWithError:(id *)a0;
- (id)verifyTreeIdentityWithError:(id *)a0;

@end
