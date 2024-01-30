@interface TSCHStyleOwnerReference : NSObject <NSCopying> {
    int _type;
    unsigned long long _index;
}

@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) unsigned long long index;
@property (readonly, nonatomic) Class styleClass;
@property (readonly, nonatomic) Class nonstyleClass;
@property (readonly, nonatomic) Class genericPropertyMapClass;

+ (id)styleOwnerReferenceWithType:(int)a0 index:(unsigned long long)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)initWithStyleOwnerType:(int)a0 index:(unsigned long long)a1;

@end
