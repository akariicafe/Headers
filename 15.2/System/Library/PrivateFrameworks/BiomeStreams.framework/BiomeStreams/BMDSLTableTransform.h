@class NSString, BMTableSchema;
@protocol BMDSLRowTransform;

@interface BMDSLTableTransform : BMDSLBaseCodable

@property (retain, nonatomic) id<BMDSLRowTransform> rowTransform;
@property (retain, nonatomic) BMTableSchema *schema;
@property (readonly, copy, nonatomic) NSString *tableName;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithRowTransform:(id)a0 schema:(id)a1 tableName:(id)a2 name:(id)a3 version:(unsigned int)a4;
- (id)initWithRowTransform:(id)a0 schema:(id)a1 tableName:(id)a2;

@end
