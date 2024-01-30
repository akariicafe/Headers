@class NSNumber;

@interface MTRAttributePath : MTRClusterPath

@property (readonly, copy, nonatomic) NSNumber *attribute;

+ (id)attributePathWithEndpointID:(id)a0 clusterID:(id)a1 attributeID:(id)a2;
+ (id)attributePathWithEndpointId:(id)a0 clusterId:(id)a1 attributeId:(id)a2;

- (id)initWithPath:(const void *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqualToAttributePath:(id)a0;

@end
