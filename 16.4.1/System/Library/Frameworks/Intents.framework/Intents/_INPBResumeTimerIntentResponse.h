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

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (void)addResumedTimers:(id)a0;
- (void)clearResumedTimers;
- (id)resumedTimersAtIndex:(unsigned long long)a0;

@end
