@class NSString;

@interface _LTLanguageInstallationStatus : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long progress;
@property (copy, nonatomic) NSString *localeIdentifier;
@property (nonatomic) unsigned long long offlineState;
@property (nonatomic) long long totalExpected;
@property (nonatomic) long long totalWritten;
@property (nonatomic) BOOL isStalled;
@property (nonatomic) double expectedTimeRemaining;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
