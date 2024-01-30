@class NSString, NSMutableString;

@interface MFStringAccumulator : NSObject {
    NSMutableString *_mutable;
    NSString *_immutable;
}

- (void)appendString:(id)a0;
- (id)string;
- (void).cxx_destruct;

@end
