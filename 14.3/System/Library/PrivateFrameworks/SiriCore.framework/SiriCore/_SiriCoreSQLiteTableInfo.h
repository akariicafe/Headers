@class NSString, NSArray;

@interface _SiriCoreSQLiteTableInfo : NSObject <SiriCoreSQLiteTable>

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSArray *columns;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithName:(id)a0 columns:(id)a1;

@end
