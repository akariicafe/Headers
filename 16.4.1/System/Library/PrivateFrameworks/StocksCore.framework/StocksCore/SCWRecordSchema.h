@class NSString, NSArray;

@interface SCWRecordSchema : NSObject

@property (readonly, copy, nonatomic) NSString *recordType;
@property (readonly, copy, nonatomic) NSArray *fieldNames;
@property (readonly, copy, nonatomic) NSArray *fieldSchemas;

- (id)initWithRecordType:(id)a0 fieldSchemas:(id)a1;
- (BOOL)isValidRecord:(id)a0;
- (id)schemaForFieldName:(id)a0;
- (void).cxx_destruct;

@end
