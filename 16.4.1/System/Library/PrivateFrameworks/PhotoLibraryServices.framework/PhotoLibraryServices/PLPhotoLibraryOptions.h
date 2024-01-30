@interface PLPhotoLibraryOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL automaticallyMergesContext;
@property (nonatomic) BOOL refreshesAfterSave;
@property (nonatomic) BOOL automaticallyPinToFirstFetch;
@property (nonatomic) long long requiredState;
@property (nonatomic) unsigned long long libraryRole;
@property (nonatomic) BOOL preventsWaitingForRequiredState;
@property (nonatomic) unsigned long long libraryInitiator;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;

@end
