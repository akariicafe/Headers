@class NSDate;

@interface ASRelationshipEvent : NSObject

@property (readonly, nonatomic) unsigned short type;
@property (readonly, nonatomic) unsigned short anchor;
@property (readonly, nonatomic) NSDate *timestamp;

+ (id)_relationshipEventWithCodable:(id)a0;
+ (id)relationshipEventWithRecord:(id)a0;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)_codableRelationshipEvent;
- (id)initWithType:(unsigned short)a0 anchor:(unsigned short)a1 timestamp:(id)a2;
- (BOOL)isEqualToRelationshipEvent:(id)a0;

@end
