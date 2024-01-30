@class NSNumber;

@interface CMKappaData : CMLogItem {
    int fState;
}

@property (readonly, nonatomic) NSNumber *state;

+ (BOOL)supportsSecureCoding;

- (id)initWithState:(int)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
