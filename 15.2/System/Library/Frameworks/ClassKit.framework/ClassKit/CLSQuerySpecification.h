@class NSPredicate, NSArray;

@interface CLSQuerySpecification : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSPredicate *predicate;
@property (readonly, nonatomic) NSArray *sortDescriptors;
@property (readonly, nonatomic) unsigned long long state;
@property (readonly, nonatomic) unsigned long long limit;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithPredicate:(id)a0 sortDescriptors:(id)a1 state:(unsigned long long)a2 limit:(unsigned long long)a3;

@end
