@class NSString, NSUUID;

@interface CMEvent : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long eventType;
@property (nonatomic) double timestamp;
@property (retain, nonatomic) NSString *peerDisplayName;
@property (retain, nonatomic) NSUUID *uuid;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
