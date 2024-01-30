@class NSArray, NSString;

@interface _INPBResumeTimerIntentResponse : PBCodable <_INPBResumeTimerIntentResponse, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *resumedTimers;
@property (readonly, nonatomic) unsigned long long resumedTimersCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)resumedTimersType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearResumedTimers;
- (void)addResumedTimers:(id)a0;
- (id)resumedTimersAtIndex:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;

@end
