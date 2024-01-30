@class NSString;
@protocol MLMediaLibraryAccountChangeObserver;

@interface _ML3MultiUserAccountChangeOperation : MSVAsyncOperation

@property (readonly, copy, nonatomic) NSString *databasePath;
@property (weak, nonatomic) id<MLMediaLibraryAccountChangeObserver> accountChangeObserver;

- (void).cxx_destruct;
- (void)execute;
- (id)initWithDatabasePath:(id)a0 accountChangeObserver:(id)a1;

@end
