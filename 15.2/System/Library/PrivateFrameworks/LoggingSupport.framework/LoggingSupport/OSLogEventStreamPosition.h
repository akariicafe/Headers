@interface OSLogEventStreamPosition : NSObject <NSSecureCoding> {
    unsigned char _source[16];
    unsigned char _uuid[16];
    unsigned long long _ct;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) const char *sourceUUID;
@property (readonly) const char *UUID;
@property (readonly) unsigned long long continuousTime;

- (void)encodeWithCoder:(id)a0;
- (id)initWithSource:(const char *)a0 bootUUID:(const char *)a1 time:(unsigned long long)a2;
- (id)initWithCoder:(id)a0;

@end
