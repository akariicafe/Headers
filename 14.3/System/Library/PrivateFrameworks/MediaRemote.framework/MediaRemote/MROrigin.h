@class NSString, NSData, _MROriginProtobuf;

@interface MROrigin : NSObject <NSCopying>

@property (class, readonly, nonatomic) MROrigin *anyOrigin;
@property (class, readonly, nonatomic) MROrigin *localOrigin;

@property (readonly, nonatomic) _MROriginProtobuf *protobuf;
@property (nonatomic) int identifier;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *displayName;
@property (nonatomic, getter=isLocal) BOOL local;
@property (readonly, nonatomic) MROrigin *skeleton;
@property (readonly, nonatomic) NSData *data;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithData:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithProtobuf:(id)a0;
- (id)initWithIdentifier:(int)a0 type:(long long)a1 displayName:(id)a2;

@end
