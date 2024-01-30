@class UABestAppSuggestion, NSString, NSUserActivity;

@interface UAUserActivityProxy : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSUserActivity *internalActivity;
@property (retain) UABestAppSuggestion *suggestedActivity;
@property unsigned long long hashValue;
@property (readonly) NSString *activityType;
@property (readonly) NSString *bundleId;
@property (readonly) BOOL isRemoteActivity;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)activityTitle;
- (id)contentAttributeSet;
- (id)initWithActivity:(id)a0 bundleId:(id)a1;
- (id)initWithSuggestion:(id)a0;
- (void)accessActivity:(id /* block */)a0;
- (void)launchActivityWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (id)activityIfAvailible;
- (id)activitySubTitle;
- (void)encodeWithCoder:(id)a0;

@end
