@class NSArray, NSString, BMTableSchema;

@interface BMDSLTableSQLQueryTransform : BMDSLBaseCodable <BMDSLTransform>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *tableNames;
@property (readonly, copy, nonatomic) NSString *SQL;
@property (readonly, nonatomic) BMTableSchema *schema;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)transformInput:(id)a0 combinedState:(id)a1;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 version:(unsigned int)a1 SQL:(id)a2 tableNames:(id)a3 schema:(id)a4;
- (id)initWithSQL:(id)a0 tableNames:(id)a1 schema:(id)a2;

@end
