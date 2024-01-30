@class NSData, NSUUID, NSSet;

@interface ARCollaborationData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long version;
@property (readonly, nonatomic) double timestamp;
@property (readonly, nonatomic) NSData *vioData;
@property (readonly, nonatomic) long long vioDataType;
@property (readonly, nonatomic) unsigned long long vioSessionID;
@property (retain, nonatomic) NSUUID *anchorIdentifier;
@property (retain, nonatomic) NSSet *anchors;
@property (readonly, nonatomic) long long priority;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithVIOData:(id)a0 type:(long long)a1 sessionID:(unsigned long long)a2;

@end
