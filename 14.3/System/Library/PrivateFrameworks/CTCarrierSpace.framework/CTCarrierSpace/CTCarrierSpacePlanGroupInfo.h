@class NSString, NSArray;

@interface CTCarrierSpacePlanGroupInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long planCategory;
@property (retain, nonatomic) NSString *groupId;
@property (retain, nonatomic) NSArray *groupOptionsList;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
