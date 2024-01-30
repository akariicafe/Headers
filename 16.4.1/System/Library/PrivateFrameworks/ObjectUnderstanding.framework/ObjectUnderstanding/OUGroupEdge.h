@class NSUUID;

@interface OUGroupEdge : NSObject <NSCopying>

@property (retain, nonatomic) NSUUID *source_object_uuid;
@property (retain, nonatomic) NSUUID *target_object_uuid;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
