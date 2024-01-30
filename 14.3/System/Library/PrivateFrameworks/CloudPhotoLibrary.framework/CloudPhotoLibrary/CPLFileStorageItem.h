@class CPLResourceIdentity, NSDate;

@interface CPLFileStorageItem : NSObject <NSCopying>

@property (readonly, nonatomic) CPLResourceIdentity *identity;
@property (readonly, nonatomic, getter=isOriginal) BOOL original;
@property (readonly, nonatomic, getter=isMarkedForDelete) BOOL markedForDelete;
@property (readonly, nonatomic) NSDate *lastAccessDate;

- (BOOL)getResourceValue:(out id *)a0 forKey:(id)a1 error:(out id *)a2;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithIdentity:(id)a0 original:(BOOL)a1 markedForDelete:(BOOL)a2 lastAccessDate:(id)a3;

@end
