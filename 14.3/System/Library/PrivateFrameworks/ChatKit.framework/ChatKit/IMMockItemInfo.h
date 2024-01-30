@interface IMMockItemInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) BOOL outgoing;

+ (id)defaultMockInfoArray;
+ (id)encodedMockItemInfoArray:(id)a0;
+ (id)decodedMockItemInfoArray:(id)a0;

- (id)initWithMockItemType:(long long)a0 outgoing:(BOOL)a1;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
