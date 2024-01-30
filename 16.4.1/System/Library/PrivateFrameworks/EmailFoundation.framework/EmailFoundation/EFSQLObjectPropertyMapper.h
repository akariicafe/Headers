@class EFSQLTableSchema, NSArray, NSDictionary, NSString, EFSQLColumnSchema;
@protocol EFSQLValueExpressable;

@interface EFSQLObjectPropertyMapper : NSObject <EFObjectPropertyMapper>

@property (readonly, nonatomic) EFSQLTableSchema *table;
@property (readonly, nonatomic) EFSQLColumnSchema *sourceColumn;
@property (readonly, nonatomic) id<EFSQLValueExpressable> condition;
@property (readonly, nonatomic) NSArray *additionalColumns;
@property (nonatomic) BOOL isPlaceholder;
@property (readonly, nonatomic) id<EFSQLValueExpressable> bitExpression;
@property (copy, nonatomic) NSDictionary *children;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithColumn:(id)a0;
- (id)childForKey:(id)a0;
- (id)initPlaceholderMapperWithChildren:(id)a0;
- (id)initWithChildren:(id)a0 sourceColumn:(id)a1;
- (id)initWithChildren:(id)a0 sourceColumn:(id)a1 additionalColumns:(id)a2;
- (id)initWithChildren:(id)a0 sourceColumn:(id)a1 condition:(id)a2;
- (id)initWithChildren:(id)a0 sourceColumn:(id)a1 condition:(id)a2 additionalColumns:(id)a3;
- (id)initWithChildren:(id)a0 table:(id)a1;
- (id)initWithChildren:(id)a0 table:(id)a1 additionalColumns:(id)a2;
- (id)initWithChildren:(id)a0 table:(id)a1 condition:(id)a2;
- (id)initWithChildren:(id)a0 table:(id)a1 condition:(id)a2 additionalColumns:(id)a3;
- (id)initWithColumn:(id)a0 additionalColumns:(id)a1;
- (id)initWithColumn:(id)a0 bitExpression:(id)a1;
- (id)initWithColumn:(id)a0 condition:(id)a1;
- (id)initWithColumn:(id)a0 condition:(id)a1 additionalColumns:(id)a2 bitExpression:(id)a3;

@end
