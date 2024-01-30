@interface GainValueArray : NSObject {
    int length;
    struct { float x0; float x1; } *elements;
}

- (id)initWithArray:(id)a0;
- (void)dealloc;
- (BOOL)isValid;

@end
