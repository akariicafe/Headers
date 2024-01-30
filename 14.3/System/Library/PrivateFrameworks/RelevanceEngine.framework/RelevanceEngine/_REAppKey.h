@class NSString;

@interface _REAppKey : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL remote;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithIdentifier:(id)a0 remote:(BOOL)a1;

@end
