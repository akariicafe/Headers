@class NSUUID, NSObject;

@interface PPFixup49995922Tuple : NSObject <NSCopying>

@property (readonly, nonatomic) long long rowid;
@property (readonly, nonatomic) NSObject *record;
@property (readonly, nonatomic) NSUUID *dkUUID;

+ (id)tupleWithRowid:(long long)a0 record:(id)a1 dkUUID:(id)a2;

- (BOOL)isEqualToTuple:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithRowid:(long long)a0 record:(id)a1 dkUUID:(id)a2;

@end
