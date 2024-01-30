@class NSArray;

@interface BMDSLKeyPathRowTransform : BMDSLBaseCodable <BMDSLRowTransform>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *keyPaths;
@property (copy, nonatomic) NSArray *columnNames;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)rowFromInput:(id)a0;
- (id)initWithKeyPaths:(id)a0 columnNames:(id)a1 name:(id)a2 version:(unsigned int)a3;
- (id)initWithKeyPaths:(id)a0 columnNames:(id)a1;

@end
