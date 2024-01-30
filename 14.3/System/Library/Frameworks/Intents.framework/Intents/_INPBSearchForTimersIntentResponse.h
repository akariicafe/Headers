@class NSArray, NSString;

@interface _INPBSearchForTimersIntentResponse : PBCodable <_INPBSearchForTimersIntentResponse, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *matchedTimers;
@property (readonly, nonatomic) unsigned long long matchedTimersCount;
@property (copy, nonatomic) NSArray *timers;
@property (readonly, nonatomic) unsigned long long timersCount;
@property (copy, nonatomic) NSArray *unmatchedTimers;
@property (readonly, nonatomic) unsigned long long unmatchedTimersCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)matchedTimersType;
+ (Class)unmatchedTimersType;
+ (Class)timersType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (void)clearMatchedTimers;
- (void)addMatchedTimers:(id)a0;
- (id)matchedTimersAtIndex:(unsigned long long)a0;
- (id)timersAtIndex:(unsigned long long)a0;
- (void)clearUnmatchedTimers;
- (void)addUnmatchedTimers:(id)a0;
- (id)unmatchedTimersAtIndex:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearTimers;
- (void)encodeWithCoder:(id)a0;
- (void)addTimers:(id)a0;

@end
