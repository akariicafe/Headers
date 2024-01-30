@interface SACSSymbolOwnerWrapper : NSObject {
    BOOL _isDiskLayout;
    struct _CSTypeRef { unsigned long long _opaque_1; unsigned long long _opaque_2; } _symbolOwner;
}

- (void)dealloc;

@end
