@class NSDictionary, NSError, NSString;

@interface PCProximityEvent : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL expectsDisplayContext;
@property (readonly, copy, nonatomic) NSDictionary *info;
@property (readonly, copy, nonatomic) NSError *error;
@property (readonly, nonatomic) long long eventType;
@property (readonly, copy, nonatomic) NSString *mediaRemoteID;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithError:(id)a0 mediaRemoteID:(id)a1;
- (id)initWithType:(long long)a0 mediaRemoteID:(id)a1 info:(id)a2;

@end
