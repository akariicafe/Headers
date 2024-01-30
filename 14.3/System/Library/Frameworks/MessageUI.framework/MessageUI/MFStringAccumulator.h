@class NSString, NSMutableString;

@interface MFStringAccumulator : NSObject {
    NSMutableString *_mutable;
    NSString *_immutable;
}

- (void).cxx_destruct;
- (id)string;
- (void)appendString:(id)a0;

@end
