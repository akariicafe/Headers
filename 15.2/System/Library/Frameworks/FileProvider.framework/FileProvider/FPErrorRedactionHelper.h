@class NSError;

@interface FPErrorRedactionHelper : NSObject {
    NSError *error;
    unsigned long long depth;
}

- (id)description;
- (void).cxx_destruct;
- (id)redactedDescription;
- (id)parseErrorIntoStringRedacted:(BOOL)a0;
- (id)initWithError:(id)a0 depth:(unsigned long long)a1;

@end
