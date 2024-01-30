@class NSString, NSUUID;

@interface CMEvent : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long eventType;
@property (nonatomic) double timestamp;
@property (retain, nonatomic) NSString *peerDisplayName;
@property (retain, nonatomic) NSUUID *uuid;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
