@interface CUMFiReadRequest : NSObject {
    unsigned long long minLen;
    unsigned long long maxLen;
    CUMFiReadRequest *next;
}

@property (copy, nonatomic) id /* block */ completion;

- (void).cxx_destruct;

@end
