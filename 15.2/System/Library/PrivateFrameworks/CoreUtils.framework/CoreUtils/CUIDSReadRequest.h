@interface CUIDSReadRequest : NSObject {
    unsigned long long minLen;
    unsigned long long maxLen;
    char *buffer;
    unsigned long long len;
    CUIDSReadRequest *next;
}

@property (copy, nonatomic) id /* block */ completion;

- (void).cxx_destruct;

@end
