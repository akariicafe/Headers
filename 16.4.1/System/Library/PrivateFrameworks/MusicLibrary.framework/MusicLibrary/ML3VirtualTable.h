@class NSString, ML3DatabaseTable, ML3DatabaseConnection, ML3DatabaseModule;
@protocol ML3VirtualTableDelegate;

@interface ML3VirtualTable : NSObject <ML3DatabaseModuleContext> {
    NSString *_virtualTableName;
    ML3DatabaseModule *_module;
}

@property (nonatomic) struct shared_ptr<ML3VirtualTableDataSource> { struct ML3VirtualTableDataSource *__ptr_; struct __shared_weak_count *__cntrl_; } dataSource;
@property (weak, nonatomic) id<ML3VirtualTableDelegate> delegate;
@property (readonly, nonatomic) ML3DatabaseTable *databaseTable;
@property (readonly, nonatomic) ML3DatabaseConnection *connection;
@property (readonly, nonatomic) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)unregister;
- (id).cxx_construct;
- (BOOL)registerWithConnection:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithDatabaseTable:(id)a0;

@end
