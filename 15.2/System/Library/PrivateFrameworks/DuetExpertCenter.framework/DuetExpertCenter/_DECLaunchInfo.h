@class NSString, NSDictionary;

@interface _DECLaunchInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long launchSource;
@property (readonly, nonatomic) NSString *query;
@property (readonly, nonatomic) unsigned char consumerSubtype;
@property (readonly, nonatomic) NSDictionary *itemsShownCounts;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithLaunchSource:(long long)a0 query:(id)a1 itemsShownCounts:(id)a2 consumerSubtype:(unsigned char)a3;

@end
