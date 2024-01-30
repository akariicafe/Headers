@class NSData;

@interface LiveFSHexAndASCIIString : NSString {
    NSData *data;
}

- (id)initWithData:(id)a0;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (unsigned long long)length;
- (id)data;
- (id)init;
- (void).cxx_destruct;

@end
