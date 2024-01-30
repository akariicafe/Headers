@class NSArray, NSDictionary, NSData, NSError, NSDate;

@interface KTVerificationInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSData *accountKey;
@property (retain) NSArray *serverLoggableDatas;
@property (retain) NSError *failure;
@property (readonly) NSDictionary *diagnosticsJsonDictionary;
@property (retain) NSDate *idsResponseTime;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithAccountKey:(id)a0;
- (id)initWithAccountKey:(id)a0 serverLoggableDatas:(id)a1;
- (void)updateServerLoggableDatas:(id)a0;

@end
