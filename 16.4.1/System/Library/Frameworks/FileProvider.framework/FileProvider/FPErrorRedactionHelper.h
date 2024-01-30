@class NSError;

@interface FPErrorRedactionHelper : NSObject {
    NSError *_error;
    unsigned long long _depth;
}

- (id)redactedDescription;
- (id)description;
- (void).cxx_destruct;
- (id)initWithError:(id)a0 depth:(unsigned long long)a1;
- (id)parseErrorIntoStringRedacted:(BOOL)a0;

@end
