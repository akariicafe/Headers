@class NSError, NSString;

@interface PCProgressEvent : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSError *error;
@property (readonly, nonatomic) long long eventType;
@property (copy, nonatomic) NSString *mediaRemoteID;

- (id)initWithError:(id)a0;
- (id)initWithEventType:(long long)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
