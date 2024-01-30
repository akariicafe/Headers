@class NSUUID;

@interface MSPPathComponent : NSObject <NSCopying>

@property (readonly, nonatomic) NSUUID *originIdentifier;
@property (readonly, nonatomic) unsigned short index;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)compare:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithIndex:(unsigned short)a0 originIdentifier:(id)a1;

@end
