@class NSError, NSString;

@interface PCProgressEvent : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSError *error;
@property (readonly, nonatomic) long long eventType;
@property (copy, nonatomic) NSString *mediaRemoteID;

- (void)encodeWithCoder:(id)a0;
- (id)initWithEventType:(long long)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithError:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
