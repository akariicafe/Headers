@class NSDictionary, NSString, NSUUID, NSMutableSet, TIRollingLog, TIKeyboardState, NSDate;
@protocol TITypologyLogDelegate;

@interface TITypologyLog : NSObject <NSCopying>

@property (copy, nonatomic) NSString *clientIdentifier;
@property (readonly, nonatomic) TIRollingLog *records;
@property (readonly, nonatomic) TIRollingLog *traceLog;
@property (retain, nonatomic) NSMutableSet *loggedRecordClasses;
@property (retain, nonatomic) TIKeyboardState *lastKeyboardState;
@property (weak, nonatomic) id<TITypologyLogDelegate> delegate;
@property (readonly, nonatomic) unsigned long long version;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) unsigned long long partIndex;
@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) NSString *systemVersion;
@property (readonly, nonatomic) NSString *buildVersion;
@property (retain, nonatomic) NSDictionary *config;
@property (readonly, nonatomic) unsigned long long numRecords;
@property (readonly, nonatomic) unsigned long long maxNumRecords;

- (id)textSummary;
- (id)propertyList;
- (id)filename;
- (id)recordsMatchingUUIDRange:(id)a0 endUUID:(id)a1;
- (id)initWithPropertyList:(id)a0;
- (void)enumerateRecordsWithBlock:(id /* block */)a0;
- (void)enumerateRecordsWithBlockIncludingStop:(id /* block */)a0;
- (id)timestamp;
- (void)_logRecord:(id)a0 trace:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)recordMatchingUUID:(id)a0;
- (id)recordUUIDsIncludedInRange:(id)a0 endUUID:(id)a1;
- (void)logRecord:(id)a0 trace:(id)a1;
- (BOOL)loggedRecordOfClass:(Class)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)logRecord:(id)a0;
- (void)logToHumanReadableTrace:(id)a0;
- (id)initWithUUID:(id)a0 partIndex:(unsigned long long)a1 date:(id)a2 systemVersion:(id)a3 buildVersion:(id)a4 clientIdentifier:(id)a5 config:(id)a6;
- (id)initWithTypologyLog:(id)a0;
- (id)recordSummary;
- (void)enumerateHumanReadableTraceEntriesWithBlock:(id /* block */)a0;

@end
