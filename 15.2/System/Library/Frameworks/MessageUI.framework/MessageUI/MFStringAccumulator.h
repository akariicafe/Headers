@class NSString, NSMutableString;

@interface MFStringAccumulator : NSObject {
    NSMutableString *_mutable;
    NSString *_immutable;
}

- (id)string;
- (void).cxx_destruct;
- (void)appendString:(id)a0;

@end
