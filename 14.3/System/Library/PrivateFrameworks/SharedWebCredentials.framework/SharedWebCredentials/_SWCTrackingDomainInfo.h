@class NSString, NSDictionary, NSDate, NSObject;
@protocol OS_dispatch_queue;

@interface _SWCTrackingDomainInfo : NSObject <NSSecureCoding> {
    NSDictionary *_JSONObject;
}

@property (class, readonly) NSObject<OS_dispatch_queue> *_queue;
@property (class, readonly, nonatomic) NSDate *lastDatabaseUpdate;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *domain;
@property (readonly) NSString *ownerName;
@property (readonly) NSString *ownerDisplayName;
@property (readonly) unsigned long long source;

+ (id)new;
+ (id)_trackingDomainInfoWithDomain:(id)a0 JSONObject:(id)a1;
+ (id)_trackingDomainInfoWithDomains:(id)a0;
+ (id)trackingDomainInfoWithDomains:(id)a0;
+ (void)_getTrackingDomainInfoWithDomains:(id)a0 completionHandler:(id /* block */)a1;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)_initWithDomain:(id)a0 JSONObject:(id)a1;
- (void)encodeWithCoder:(id)a0;

@end
