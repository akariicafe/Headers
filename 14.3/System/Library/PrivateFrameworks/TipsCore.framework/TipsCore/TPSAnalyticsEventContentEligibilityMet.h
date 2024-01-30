@class NSString, NSArray;

@interface TPSAnalyticsEventContentEligibilityMet : TPSAnalyticsEvent

@property (readonly, nonatomic) NSString *contentID;
@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSArray *eligibleContext;
@property (readonly, nonatomic) unsigned long long displayType;

+ (id)eventWithContentID:(id)a0 bundleID:(id)a1 eligibleContext:(id)a2 displayType:(unsigned long long)a3 date:(id)a4;
+ (BOOL)supportsSecureCoding;
+ (id)classSet;

- (id)eventName;
- (id)duetEvent;
- (void).cxx_destruct;
- (id)_initWithContentID:(id)a0 bundleID:(id)a1 eligibleContext:(id)a2 displayType:(unsigned long long)a3 date:(id)a4;
- (id)mutableAnalyticsEventRepresentation;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
