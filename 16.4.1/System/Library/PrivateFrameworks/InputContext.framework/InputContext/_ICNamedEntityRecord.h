@class NSString;

@interface _ICNamedEntityRecord : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long data;

- (id)initWithName:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithName:(id)a0 data:(unsigned long long)a1;
- (id)description;
- (void).cxx_destruct;

@end
