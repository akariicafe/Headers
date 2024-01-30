@class NSString, NSDictionary, NSOrderedSet, NSDate;

@interface AFClockTimerSnapshot : NSObject <AFContextSnapshot, NSCopying, NSSecureCoding, AFDictionaryConvertible>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long generation;
@property (readonly, copy, nonatomic) NSDate *date;
@property (readonly, copy, nonatomic) NSDictionary *timersByID;
@property (readonly, copy, nonatomic) NSOrderedSet *notifiedFiringTimerIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newWithBuilder:(id /* block */)a0;

- (id)_descriptionWithIndent:(unsigned long long)a0;
- (id)ad_shortDescription;
- (id)buildDictionaryRepresentation;
- (id)mutatedCopyWithMutator:(id /* block */)a0;
- (id)initWithDictionaryRepresentation:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)hasFiringTimers;
- (id)initWithSerializedBackingStore:(id)a0;
- (id)serializedBackingStore;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)mostRecentFiringTimer;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithGeneration:(unsigned long long)a0 date:(id)a1 timersByID:(id)a2 notifiedFiringTimerIDs:(id)a3;
- (id)firingTimers;

@end
