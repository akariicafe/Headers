@interface CKContextCountedItem : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) id item;
@property (nonatomic) unsigned long long count;

+ (id)item:(id)a0 withCount:(unsigned long long)a1;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
