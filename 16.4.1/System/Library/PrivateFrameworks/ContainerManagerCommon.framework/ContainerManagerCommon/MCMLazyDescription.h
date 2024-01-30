@class NSString;

@interface MCMLazyDescription : NSString {
    id /* block */ _block;
    NSString *_value;
}

- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (id)redactedDescription;
- (id)initWithDescriber:(id /* block */)a0;
- (unsigned long long)length;
- (id)description;
- (void).cxx_destruct;

@end
