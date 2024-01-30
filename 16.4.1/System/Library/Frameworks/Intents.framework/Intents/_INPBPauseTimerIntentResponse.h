@class NSArray, NSString;

@interface _INPBPauseTimerIntentResponse : PBCodable <_INPBPauseTimerIntentResponse, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *pausedTimers;
@property (readonly, nonatomic) unsigned long long pausedTimersCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)pausedTimersType;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (void)addPausedTimers:(id)a0;
- (void)clearPausedTimers;
- (id)pausedTimersAtIndex:(unsigned long long)a0;

@end
