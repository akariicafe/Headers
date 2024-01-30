@interface NSHTTPCookieInternal_Data : NSHTTPCookieInternal {
    struct CompactHTTPCookieWithData { void /* function */ **x0; char *x1; } *_fromData;
}

- (struct HTTPCookie { void /* function */ **x0; } *)_inner;
- (id)_initWithHeader:(const struct CompactCookieHeader { } *)a0;
- (id)init;
- (void)dealloc;
- (id)_initWithCookie:(id)a0 partition:(id)a1;
- (id)_initWithProperties:(id)a0 fromString:(BOOL)a1;

@end
