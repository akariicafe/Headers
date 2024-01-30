@class NSString;

@interface MTLSharedEventHandle : NSObject <NSSecureCoding> {
    struct MTLSharedEventHandlePrivate { unsigned int x0; id x1; unsigned long long x2; } *_priv;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *label;

- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (unsigned long long)labelTraceID;
- (id)initWithSharedEvent:(id)a0;
- (unsigned int)eventPort;
- (void)encodeWithCoder:(id)a0;

@end
