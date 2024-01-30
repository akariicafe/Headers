@class NSString, NSArray, NSData, NSUUID, NSNumber;

@interface CMMessage : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long messageType;
@property (nonatomic) double timestamp;
@property (retain, nonatomic) NSString *fromPeerDisplayName;
@property (retain, nonatomic) NSArray *toPeerDisplays;
@property (nonatomic) long long cmDataType;
@property (retain, nonatomic) NSData *cmData;
@property (retain, nonatomic) NSData *cmAdditionalData;
@property (retain, nonatomic) NSNumber *sessionID;
@property (retain, nonatomic) NSNumber *movLowestTimestamp;
@property (retain, nonatomic) NSUUID *uuid;
@property (nonatomic) BOOL isSent;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithMessageType:(unsigned long long)a0;

@end
