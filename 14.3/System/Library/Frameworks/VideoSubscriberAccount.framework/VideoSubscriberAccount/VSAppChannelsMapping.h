@class NSString, NSArray;

@interface VSAppChannelsMapping : NSObject

@property (copy, nonatomic) NSString *appAdamID;
@property (copy, nonatomic) NSArray *channelIDs;

+ (BOOL)supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
