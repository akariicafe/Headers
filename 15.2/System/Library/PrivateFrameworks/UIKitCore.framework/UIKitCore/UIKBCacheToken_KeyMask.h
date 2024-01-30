@interface UIKBCacheToken_KeyMask : UIKBCacheToken_Key

+ (id)tokenForKey:(id)a0 style:(struct { unsigned char x0 : 6; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 8; unsigned char x4 : 8; unsigned char x5 : 8; })a1 displayInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2;

- (id)_stringWithAdditionalValues:(id /* block */)a0;

@end
