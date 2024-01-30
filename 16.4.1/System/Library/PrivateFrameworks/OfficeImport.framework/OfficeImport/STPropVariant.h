@interface STPropVariant : NSObject {
    struct _SsrwPropVariant { unsigned short vt; union { unsigned char cVal; short iVal; int lVal; double dblVal; unsigned short *bstrVal; struct _SSRW_BLOB { unsigned int cbSize; char *pData; } blob; char *pszVal; struct _SSRW_FILETIME { unsigned int dwLowDateTime; unsigned int dwHighDateTime; } filetime; struct _SSRW_CLIPDATA *pclipdata; short boolVal; } v; } mProp;
}

- (void)setStringValue:(id)a0;
- (void)dealloc;
- (void)setShortValue:(short)a0;
- (void)setLongValue:(int)a0;
- (void)setBlobValue:(id)a0;
- (id)asDataOfType:(int *)a0;
- (struct _SsrwPropVariant { unsigned short x0; union { unsigned char x0; short x1; int x2; double x3; unsigned short *x4; struct _SSRW_BLOB { unsigned int x0; char *x1; } x5; char *x6; struct _SSRW_FILETIME { unsigned int x0; unsigned int x1; } x7; struct _SSRW_CLIPDATA *x8; short x9; } x1; } *)propVariant;

@end
