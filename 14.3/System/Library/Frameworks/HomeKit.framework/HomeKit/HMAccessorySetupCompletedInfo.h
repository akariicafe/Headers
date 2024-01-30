@class NSArray, NSString;

@interface HMAccessorySetupCompletedInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *addedAccessoryUUIDs;
@property (retain, nonatomic) NSString *homeUUID;

- (void).cxx_destruct;
- (id)initWithHome:(id)a0 accessoryList:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
