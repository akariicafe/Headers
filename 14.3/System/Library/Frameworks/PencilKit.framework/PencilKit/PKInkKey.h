@class NSString;

@interface PKInkKey : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) unsigned long long version;
@property (readonly, copy, nonatomic) NSString *variant;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithIdentifier:(id)a0 version:(unsigned long long)a1 variant:(id)a2;

@end
