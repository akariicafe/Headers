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

+ (id)_trackingDomainInfoWithDomains:(id)a0 sources:(unsigned long long)a1;
+ (void)_getTrackingDomainInfoWithDomains:(id)a0 sources:(unsigned long long)a1 completionHandler:(id /* block */)a2;
+ (id)trackingDomainInfoWithDomains:(id)a0;
+ (id)_trackingDomainInfoWithDomain:(id)a0 JSONObject:(id)a1;
+ (id)new;
+ (void)getTrackingDomainInfoWithDomains:(id)a0 sources:(unsigned long long)a1 completion:(id /* block */)a2;
+ (id)_trackingDomainInfoWithDomain:(id)a0 JSONObject:(id)a1 expectedSources:(unsigned long long)a2;
+ (id)_trackingDomainInfoWithDomains:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (id)_initWithDomain:(id)a0 JSONObject:(id)a1;
- (void).cxx_destruct;

@end
