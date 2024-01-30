@class NSString;

@interface MTLSharedEventHandle : NSObject <NSSecureCoding> {
    struct MTLSharedEventHandlePrivate { unsigned int x0; id x1; unsigned long long x2; } *_priv;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *label;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (unsigned int)eventPort;
- (id)initWithSharedEvent:(id)a0;
- (unsigned long long)labelTraceID;

@end
