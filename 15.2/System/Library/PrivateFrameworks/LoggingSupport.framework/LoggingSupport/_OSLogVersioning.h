@class _OSLogCollectionReference;

@interface _OSLogVersioning : NSObject {
    _OSLogCollectionReference *_lcr;
    BOOL _closeOnRelease;
}

@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) BOOL hasEndTimeRef;
@property (readonly, nonatomic) long long version;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0 error:(id *)a1;
- (void)dealloc;
- (BOOL)performDestructiveUpdates:(id *)a0;
- (id)initWithCollection:(id)a0 error:(id *)a1;
- (id)initWithCollection:(id)a0 closeOnRelease:(BOOL)a1 error:(id *)a2;
- (BOOL)checkTimesyncDB:(BOOL *)a0 error:(id *)a1;
- (BOOL)repairTimesyncDB:(id *)a0;

@end
