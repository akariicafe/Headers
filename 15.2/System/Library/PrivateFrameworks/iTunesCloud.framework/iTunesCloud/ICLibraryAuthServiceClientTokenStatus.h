@class ICLibraryAuthServiceClientTokenResult, NSError;

@interface ICLibraryAuthServiceClientTokenStatus : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) ICLibraryAuthServiceClientTokenResult *tokenResult;
@property (copy, nonatomic) NSError *lastError;
@property (nonatomic) double lastUpdateAttemptTime;
@property (nonatomic) BOOL shouldExcludeFromBackgroundRefresh;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
