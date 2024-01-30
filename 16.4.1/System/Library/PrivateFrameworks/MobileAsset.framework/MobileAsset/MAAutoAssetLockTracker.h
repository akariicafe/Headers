@class MAAutoAssetLockReason, MAAutoAssetPolicy, NSDate;

@interface MAAutoAssetLockTracker : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, retain, nonatomic) MAAutoAssetLockReason *clientLockReason;
@property (retain, nonatomic) MAAutoAssetPolicy *lockUsagePolicy;
@property (nonatomic) long long activeLockCount;
@property (nonatomic) long long maximumLockCount;
@property (nonatomic) long long totalLockCount;
@property (nonatomic) long long continueCount;
@property (retain, nonatomic) NSDate *firstLockTimestamp;
@property (retain, nonatomic) NSDate *lastRefreshTimestamp;

+ (id)summaryPaddedHeader:(id)a0;
+ (id)summaryNewMaxColumnStrings;
+ (id)summaryPaddedBanner:(id)a0;
+ (id)summaryPaddedString:(id)a0 paddingToLenghtOfString:(id)a1 paddingWith:(id)a2 paddingBefore:(BOOL)a3;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)summary;
- (id)newSummaryDictionary;
- (void)summaryBuildMaxColumnStrings:(id)a0;
- (id)copy;
- (id)initForClientLockReason:(id)a0 lockingWithUsagePolicy:(id)a1;
- (id)description;
- (id)summaryPadded:(id)a0;
- (void).cxx_destruct;

@end
