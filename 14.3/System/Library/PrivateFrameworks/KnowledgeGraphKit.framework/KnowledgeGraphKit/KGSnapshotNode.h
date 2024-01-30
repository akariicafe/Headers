@class NSArray, NSDictionary, NSString;

@interface KGSnapshotNode : NSObject <KGNode>

@property (readonly, nonatomic) unsigned long long identifier;
@property (readonly, nonatomic) float weight;
@property (readonly, copy, nonatomic) NSArray *labels;
@property (readonly, copy, nonatomic) NSDictionary *properties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithIdentifier:(unsigned long long)a0 labels:(id)a1 weight:(float)a2 properties:(id)a3;

@end
