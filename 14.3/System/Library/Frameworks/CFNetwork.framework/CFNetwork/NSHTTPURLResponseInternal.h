@interface NSHTTPURLResponseInternal : NSObject <NSCoding> {
    struct __SecTrust { } *peerTrust;
    BOOL isMixedReplace;
}

- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
