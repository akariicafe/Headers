@class NSString, NSMutableDictionary, NSDate;

@interface EventDescription : NSObject

@property (readonly, nonatomic) int eventType;
@property (readonly, nonatomic) NSDate *creationTimeStamp;
@property (readonly, nonatomic) struct { unsigned int val[8]; } auditToken;
@property (readonly, nonatomic) unsigned long long processId;
@property (readonly, nonatomic) char *processName;
@property (readonly, nonatomic) char *bundleId;
@property (readonly, nonatomic) BOOL verifiedDelegateSymptom;
@property (readonly, nonatomic) long long eventLen;
@property (readonly, nonatomic) void *eventData;
@property (readonly, nonatomic) NSMutableDictionary *eventQualifiers;
@property (retain, nonatomic) NSString *eventKey;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithType:(int)a0 length:(long long)a1 data:(void *)a2 fromPid:(unsigned long long)a3 named:(char *)a4 bundleId:(const char *)a5;
- (id)description;
- (char *)originatorForLogging;
- (id)initWithType:(int)a0 length:(long long)a1 data:(void *)a2 fromAuditToken:(struct { unsigned int x0[8]; })a3 fromPid:(unsigned long long)a4 named:(char *)a5 bundleId:(const char *)a6 verifiedDelegateSymptom:(BOOL)a7;
- (id)eventQualifierStringForKey:(id)a0;

@end
