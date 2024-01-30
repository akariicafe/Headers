@class NSString, NSDictionary;

@interface IKAppPrototypeIdentifier : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *selector;
@property (readonly, copy, nonatomic) NSDictionary *groupingValues;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 selector:(id)a1 groupingValues:(id)a2;

@end
