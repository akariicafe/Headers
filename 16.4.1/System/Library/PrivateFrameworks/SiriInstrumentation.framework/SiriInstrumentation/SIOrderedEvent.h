@class SIOrderedEventInternal, SILogicalTimestamp, SISchemaTopLevelUnionType;

@interface SIOrderedEvent : NSObject {
    SIOrderedEventInternal *_underlying;
    SILogicalTimestamp *_underlyingTimestamp;
}

@property (readonly, nonatomic) SILogicalTimestamp *logicalTimestamp;
@property (readonly, nonatomic) SISchemaTopLevelUnionType *topLevelUnionType;

+ (id)deserializeFromData:(id)a0;

- (id)initWithData:(id)a0;
- (id)data;
- (id)serialize;
- (void).cxx_destruct;
- (id)initWithTimestamp:(id)a0 topLevelUnionType:(id)a1;
- (id)initWithInternalType:(id)a0;

@end
