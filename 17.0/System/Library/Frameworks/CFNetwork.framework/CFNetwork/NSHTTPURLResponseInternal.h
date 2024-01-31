@interface NSHTTPURLResponseInternal : NSObject <NSCoding> {
    struct __SecTrust { } *peerTrust;
    BOOL isMixedReplace;
}

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
