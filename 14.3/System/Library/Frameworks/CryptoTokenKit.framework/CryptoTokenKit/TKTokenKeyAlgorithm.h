@class NSArray;

@interface TKTokenKeyAlgorithm : NSObject {
    NSArray *_algorithms;
}

- (void).cxx_destruct;
- (BOOL)isAlgorithm:(struct __CFString { } *)a0;
- (id)initWithAlgorithmsArray:(id)a0;
- (BOOL)supportsAlgorithm:(struct __CFString { } *)a0;

@end
