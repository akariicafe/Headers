@class NSString, GEOApplicationAuditToken;

@interface GEONavdClientInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *canonicalName;
@property (copy, nonatomic) NSString *uniqueClientId;
@property (retain, nonatomic) GEOApplicationAuditToken *auditToken;

+ (id)clientInfoForNavdPredictions;

- (id)initWithCanonicalName:(id)a0 instanceId:(unsigned long long)a1 auditToken:(id)a2;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isNavdClientInfo;
- (BOOL)isEqual:(id)a0;
- (BOOL)isCalendarClientInfo;
- (id)initWithCanonicalName:(id)a0 instanceId:(unsigned long long)a1;
- (void)encodeWithCoder:(id)a0;

@end
