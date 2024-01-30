@class NSString;

@interface PLPhotoDCFObject : NSObject {
    NSString *_name;
    int _number;
}

+ (id)validDCFNameForName:(id)a0 requiredLength:(int)a1 nameLength:(int)a2 number:(int *)a3 numberRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4 suffix:(id)a5;

- (int)number;
- (long long)compare:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)name;
- (id)initWithName:(id)a0 number:(int)a1;
- (void)setWriteIsPending:(BOOL)a0;

@end
