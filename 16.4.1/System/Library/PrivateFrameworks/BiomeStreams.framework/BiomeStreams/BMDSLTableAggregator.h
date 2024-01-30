@class NSArray;

@interface BMDSLTableAggregator : BMDSLAggregator

@property (retain, nonatomic) NSArray *transforms;
@property (readonly, copy, nonatomic) NSArray *classNames;
@property (readonly, copy, nonatomic) NSArray *classKeyPaths;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)bpsAggregator;
- (id)initWithTableTransforms:(id)a0 classNames:(id)a1;
- (id)initWithTableTransforms:(id)a0 classNames:(id)a1 classKeyPaths:(id)a2;
- (id)initWithTableTransforms:(id)a0 classNames:(id)a1 classKeyPaths:(id)a2 name:(id)a3 version:(unsigned int)a4;

@end
