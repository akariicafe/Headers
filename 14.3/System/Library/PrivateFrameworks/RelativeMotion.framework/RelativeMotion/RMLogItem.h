@interface RMLogItem : NSObject <NSSecureCoding, NSCopying> {
    id _internalLogItem;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double timestamp;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithTimestamp:(double)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
