@class NSString, AMSBagFrozenDataSource, NSDate, AMSProcessInfo;

@interface AMSSnapshotBag : NSObject <NSSecureCoding, AMSBagProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) AMSBagFrozenDataSource *dataSource;
@property (nonatomic) struct optional<AMSCore::Bag> { union { char __null_state_; struct Bag { void /* function */ **_vptr$ILoggable; struct shared_ptr<AMSCore::IBagDataSource> { struct IBagDataSource *__ptr_; struct __shared_weak_count *__cntrl_; } mDataSource; } __val_; } ; BOOL __engaged_; } underlyingBag;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic, getter=isExpired) BOOL expired;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly, copy, nonatomic) NSString *profile;
@property (readonly, copy, nonatomic) NSString *profileVersion;
@property (readonly, copy, nonatomic) AMSProcessInfo *processInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithData:(id)a0;
- (void)createSnapshotWithCompletion:(id /* block */)a0;
- (void)encodeWithCoder:(id)a0;
- (id)arrayForKey:(id)a0;
- (id)compile;
- (id)dictionaryForKey:(id)a0;
- (id)integerForKey:(id)a0;
- (id)boolForKey:(id)a0;
- (id)doubleForKey:(id)a0;
- (id).cxx_construct;
- (id)initWithCoder:(id)a0;
- (id)URLForKey:(id)a0;
- (id)stringForKey:(id)a0;
- (id)URLForKey:(id)a0 account:(id)a1;
- (BOOL)isLoaded;
- (id)init;
- (id)_initWithSnapshotBag:(id)a0;
- (id)initWithBag:(struct Bag { void /* function */ **x0; struct shared_ptr<AMSCore::IBagDataSource> { struct IBagDataSource *x0; struct __shared_weak_count *x1; } x1; })a0;
- (void).cxx_destruct;
- (id)_initWithDataSource:(id)a0;

@end
