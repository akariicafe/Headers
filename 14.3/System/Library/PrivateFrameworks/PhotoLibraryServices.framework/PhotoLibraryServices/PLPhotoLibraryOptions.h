@interface PLPhotoLibraryOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL automaticallyMergesContext;
@property (nonatomic) long long requiredState;
@property (nonatomic) unsigned long long libraryRole;
@property (nonatomic) BOOL preventsWaitingForRequiredState;
@property (nonatomic) unsigned long long libraryInitiator;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
