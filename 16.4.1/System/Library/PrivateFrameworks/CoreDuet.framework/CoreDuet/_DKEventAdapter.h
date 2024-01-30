@class _DKEvent, NSDictionary, NSArray, NSNumber;

@interface _DKEventAdapter : NSObject {
    NSDictionary *_structuredMetadata;
    NSArray *_customMetadata;
    NSNumber *_startDayOfWeek;
    NSNumber *_endDayOfWeek;
}

@property (retain, nonatomic) _DKEvent *dkEvent;

- (id)stringValue;
- (id)creationDate;
- (long long)integerValue;
- (id)forwardingTargetForSelector:(SEL)a0;
- (double)doubleValue;
- (id)streamName;
- (double)confidence;
- (id)UUID;
- (id)metadata;
- (id)uuid;
- (id)endDate;
- (BOOL)isEqual:(id)a0;
- (id)value;
- (id)customMetadata;
- (id)stream;
- (id)localCreationDate;
- (unsigned long long)hash;
- (long long)startSecondOfDay;
- (long long)startDayOfWeek;
- (id)structuredMetadata;
- (id)uuidHash;
- (long long)endSecondOfDay;
- (short)valueClass;
- (double)valueDouble;
- (id)startDate;
- (long long)compatibilityVersion;
- (id)timeZone;
- (long long)valueInteger;
- (long long)endDayOfWeek;
- (id)valueString;
- (void).cxx_destruct;
- (long long)valueTypeCode;
- (id)source;
- (long long)secondsFromGMT;
- (BOOL)boolValue;

@end
