@interface NSHTTPCookieInternal_Ref : NSHTTPCookieInternal {
    struct CompactHTTPCookieReference { void /* function */ **x0; struct CompactCookieArray *x1; struct CompactCookieHeader *x2; } *_fromRef;
}

- (id)init;
- (struct HTTPCookie { void /* function */ **x0; } *)_inner;
- (void)dealloc;
- (id)_initWithReference:(const struct CompactCookieArray { } *)a0 index:(long long)a1;

@end
