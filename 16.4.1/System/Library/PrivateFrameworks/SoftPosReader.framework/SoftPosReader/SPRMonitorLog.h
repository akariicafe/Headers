@class NSString, NSData;

@interface SPRMonitorLog : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *event;
@property (copy) NSData *details;
@property (copy) NSString *origin;
@property (copy) NSString *component;
@property (readonly) long long logType;

+ (id)getEventString:(long long)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithAudit:(id)a0 details:(id)a1 origin:(id)a2 component:(id)a3;
- (id)initWithEvent:(long long)a0 details:(id)a1 origin:(id)a2 component:(id)a3;
- (id)initWithIncident:(id)a0 details:(id)a1 origin:(id)a2 component:(id)a3;

@end
