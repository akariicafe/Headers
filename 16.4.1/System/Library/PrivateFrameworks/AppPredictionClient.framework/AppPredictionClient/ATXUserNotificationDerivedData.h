@class NSArray, NSMutableArray;

@interface ATXUserNotificationDerivedData : NSObject <NSSecureCoding, ATXProtoBufWrapper, ATXJSONSerializableProtocol, NSCopying> {
    NSMutableArray *_internalScores;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=getPublicScores) NSArray *scores;

- (id)initWithProto:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)encodeAsProto;
- (id)initWithCoder:(id)a0;
- (id)proto;
- (id)initFromJSON:(id)a0;
- (id)initWithProtoData:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addScores:(id)a0;
- (id)jsonRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initFromModelScores:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqualToATXUserNotificationDerivedData:(id)a0;
- (void)addScore:(id)a0;

@end
