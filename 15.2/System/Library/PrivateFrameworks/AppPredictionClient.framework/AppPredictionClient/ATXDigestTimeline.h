@class NSDate;

@interface ATXDigestTimeline : NSObject <NSSecureCoding, ATXProtoBufWrapper, ATXJSONSerializableProtocol, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDate *firstUpcomingViewTimestamp;
@property (retain, nonatomic) NSDate *firstCollapsedViewTimestamp;
@property (retain, nonatomic) NSDate *firstScheduledViewTimestamp;
@property (retain, nonatomic) NSDate *digestRemovedTimestamp;

- (id)initWithProto:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithProtoData:(id)a0;
- (id)initFromJSON:(id)a0;
- (id)jsonRepresentation;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)proto;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)encodeAsProto;
- (id)json;
- (id)jsonDict;
- (BOOL)isEqualToATXDigestTimeline:(id)a0;
- (BOOL)_timelineFieldsAreEqual:(id)a0 otherField:(id)a1;

@end
