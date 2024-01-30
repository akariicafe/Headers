@interface NSHTTPURLResponseInternal : NSObject <NSCoding> {
    struct __SecTrust { } *peerTrust;
    BOOL isMixedReplace;
}

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;

@end
