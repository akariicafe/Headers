@class NSString;

@interface MCMLazyDescription : NSString {
    id /* block */ _block;
    NSString *_value;
}

- (unsigned long long)length;
- (void).cxx_destruct;
- (id)redactedDescription;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)description;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (id)initWithDescriber:(id /* block */)a0;

@end
