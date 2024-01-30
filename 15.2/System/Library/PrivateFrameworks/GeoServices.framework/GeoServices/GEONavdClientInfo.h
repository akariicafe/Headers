@class NSString, GEOApplicationAuditToken;

@interface GEONavdClientInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *canonicalName;
@property (copy, nonatomic) NSString *uniqueClientId;
@property (retain, nonatomic) GEOApplicationAuditToken *auditToken;

+ (id)clientInfoForNavdPredictions;

- (BOOL)isNavdClientInfo;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isCalendarClientInfo;
- (id)description;
- (id)initWithCanonicalName:(id)a0 instanceId:(unsigned long long)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCanonicalName:(id)a0 instanceId:(unsigned long long)a1 auditToken:(id)a2;
- (unsigned long long)hash;

@end
