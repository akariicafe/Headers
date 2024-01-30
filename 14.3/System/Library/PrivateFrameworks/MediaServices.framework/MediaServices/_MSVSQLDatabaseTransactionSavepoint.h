@class NSString, MSVSQLDatabaseTransaction;

@interface _MSVSQLDatabaseTransactionSavepoint : NSObject <MSVSQLDatabaseTransactionSavepoint> {
    MSVSQLDatabaseTransaction *_transaction;
}

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
