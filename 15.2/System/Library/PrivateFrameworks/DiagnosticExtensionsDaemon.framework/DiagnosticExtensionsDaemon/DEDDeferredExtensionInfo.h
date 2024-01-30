@class NSString, NSDictionary, NSDate, DEDExtensionIdentifier;

@interface DEDDeferredExtensionInfo : NSObject <DEDSecureArchiving, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *bugSessionIdentifier;
@property (readonly) DEDExtensionIdentifier *dedIdentifier;
@property (retain, nonatomic) NSDate *triggerDate;
@property (nonatomic) double gracePeriod;
@property (retain) NSDictionary *parameters;
@property BOOL scheduled;
@property (readonly, nonatomic) NSString *activityString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)checkIn;
+ (id)activityStringForBugSessionIdentifier:(id)a0 dedIdentifier:(id)a1;
+ (id)allInfo;
+ (id)log;
+ (id)archivedClasses;
+ (double)recommendedGracePeriodForDate:(id)a0;

- (void)unschedule;
- (void)encodeWithCoder:(id)a0;
- (void)run;
- (id)criteria;
- (void)schedule;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isOverdue;
- (void)removeFromStore;
- (id)initWithBugSessionIdentifier:(id)a0 dedIdentifier:(id)a1 runOnDate:(id)a2 withGracePeriod:(double)a3;
- (void)addToStore;

@end
