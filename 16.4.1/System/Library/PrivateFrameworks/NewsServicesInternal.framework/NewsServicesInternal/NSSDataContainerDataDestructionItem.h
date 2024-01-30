@interface NSSDataContainerDataDestructionItem : NSObject <NSCopying>

@property (nonatomic) unsigned long long containerClass;
@property (nonatomic) const char *identifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)initWithContainerClass:(unsigned long long)a0 identifier:(const char *)a1;

@end
