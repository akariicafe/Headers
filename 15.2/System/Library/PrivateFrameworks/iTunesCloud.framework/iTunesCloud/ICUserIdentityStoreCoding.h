@class ICDelegateAccountStoreOptions, ICValueHistory;
@protocol ICUserIdentityStoreBackend;

@interface ICUserIdentityStoreCoding : NSObject <NSSecureCoding> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long identityStoreStyle;
@property (readonly, nonatomic) long long uniqueIdentifier;
@property (copy, nonatomic) ICValueHistory *activeAccountHistory;
@property (copy, nonatomic) ICValueHistory *activeLockerAccountHistory;
@property (copy, nonatomic) id<ICUserIdentityStoreBackend> backend;
@property (copy, nonatomic) ICDelegateAccountStoreOptions *delegateAccountStoreOptions;

- (void)lock:(id /* block */)a0;
- (id)_initCommon;
- (void)encodeWithCoder:(id)a0;
- (id)initWithIdentityStoreStyle:(long long)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
