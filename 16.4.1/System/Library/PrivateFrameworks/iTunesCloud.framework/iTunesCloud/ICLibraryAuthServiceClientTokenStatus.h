@class ICLibraryAuthServiceClientTokenResult, NSError, NSDate;

@interface ICLibraryAuthServiceClientTokenStatus : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) ICLibraryAuthServiceClientTokenResult *tokenResult;
@property (copy, nonatomic) NSError *lastError;
@property (nonatomic) double lastUpdateAttemptTime;
@property (nonatomic) BOOL shouldExcludeFromBackgroundRefresh;
@property (readonly, copy, nonatomic) NSDate *lastUpdatedDate;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
