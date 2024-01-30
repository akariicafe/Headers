@interface THAButton : NSObject

@property (nonatomic) unsigned char identifier;
@property (nonatomic) unsigned long long type;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithType:(unsigned long long)a0 identifier:(unsigned char)a1;
- (unsigned long long)hash;

@end
