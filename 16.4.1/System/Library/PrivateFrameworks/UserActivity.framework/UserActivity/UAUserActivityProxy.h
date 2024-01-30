@class NSUUID, NSUserActivity, NSString, UABestAppSuggestion;

@interface UAUserActivityProxy : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSUUID *uuid;
@property (retain) NSUserActivity *internalActivity;
@property (retain) UABestAppSuggestion *suggestedActivity;
@property (readonly) NSString *activityType;
@property (readonly) NSString *dynamicActivityType;
@property (readonly) NSString *bundleIdentifier;
@property (readonly) BOOL isRemoteActivity;

- (void)encodeWithCoder:(id)a0;
- (id)activityTitle;
- (id)initWithCoder:(id)a0;
- (id)contentAttributeSet;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithSuggestion:(id)a0;
- (void)launchActivityWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (void)accessActivity:(id /* block */)a0;
- (id)activityIfAvailible;
- (id)activitySubTitle;
- (id)initWithActivity:(id)a0 bundleId:(id)a1;
- (id)initWithUUID:(id)a0 activityType:(id)a1 bundleID:(id)a2;
- (id)initWithUUID:(id)a0 activityType:(id)a1 dynamicActivityType:(id)a2 bundleID:(id)a3;

@end
