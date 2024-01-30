@class NSString;
@protocol MLMediaLibraryAccountChangeObserver, _ML3MultiUserDaemonAccountChangeOperationDelegate;

@interface _ML3MultiUserDaemonAccountChangeOperation : MSVAsyncOperation

@property (retain, nonatomic) id<MLMediaLibraryAccountChangeObserver> accountChangeObserver;
@property (readonly, copy, nonatomic) NSString *initialDSID;
@property (readonly, copy, nonatomic) NSString *finalDSID;
@property (weak, nonatomic) id<_ML3MultiUserDaemonAccountChangeOperationDelegate> delegate;

- (void).cxx_destruct;
- (void)execute;
- (id)initWithInitialDSID:(id)a0 finalDSID:(id)a1 accountChangeObserver:(id)a2;

@end
