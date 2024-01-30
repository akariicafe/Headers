@class NSString, NSArray;

@interface CTCarrierSpacePlanGroupInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long planCategory;
@property (retain, nonatomic) NSString *groupId;
@property (retain, nonatomic) NSArray *groupOptionsList;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
