@class NSArray, NSString, NSData, NSDate;

@interface IDSActivityInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *deviceUniqueIDs;
@property (readonly, nonatomic) NSArray *tokens;
@property (readonly, nonatomic) NSArray *URIs;
@property (readonly, nonatomic) NSString *subActivity;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (copy, nonatomic) NSData *appContext;

+ (id)activityInfoWithSubActivity:(id)a0 tokens:(id)a1;
+ (id)activityInfoWithSubActivity:(id)a0 URIs:(id)a1;
+ (id)activityInfoWithSubActivity:(id)a0 devices:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isIdentical:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)_initWithSubActivity:(id)a0;

@end
