@class NSString, NSDictionary, NSUUID, NSDate, NSNumber;

@interface STAskForTimeRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL oneMoreMinute;
@property (copy, nonatomic) NSString *resourceDisplayName;
@property (retain, nonatomic) NSNumber *timeRequested;
@property (retain, nonatomic) NSDate *timeStamp;
@property (readonly, copy, nonatomic) NSDictionary *payload;
@property (readonly, nonatomic) long long usageType;
@property (readonly, copy, nonatomic) NSString *requestedResourceIdentifier;
@property (retain, nonatomic) NSUUID *requestIdentifier;
@property (retain, nonatomic) NSNumber *requestingUserDSID;
@property (copy, nonatomic) NSString *requestingUserDisplayName;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithPayload:(id)a0;
- (id)initWithUsageType:(long long)a0 requestedResourceIdentifier:(id)a1;

@end
