@class NSDictionary, NSString, NSUUID, TIRollingLog, NSMutableSet, TIKeyboardState, NSDate;

@interface TITypologyLog : NSObject <NSCopying>

@property (copy, nonatomic) NSString *clientIdentifier;
@property (copy, nonatomic) NSUUID *lastRecordUUID;
@property (readonly, nonatomic) TIRollingLog *records;
@property (readonly, nonatomic) TIRollingLog *traceLog;
@property (retain, nonatomic) NSMutableSet *loggedRecordClasses;
@property (retain, nonatomic) TIKeyboardState *lastKeyboardState;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) NSString *systemVersion;
@property (readonly, nonatomic) NSString *buildVersion;
@property (retain, nonatomic) NSDictionary *config;

- (id)filename;
- (id)propertyList;
- (id)timestamp;
- (id)textSummary;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)logRecord:(id)a0;
- (id)initWithPropertyList:(id)a0;
- (id)initWithTypologyLog:(id)a0;
- (id)recordSummary;
- (void)enumerateRecordsWithBlock:(id /* block */)a0;
- (void)enumerateHumanReadableTraceEntriesWithBlock:(id /* block */)a0;
- (BOOL)loggedRecordOfClass:(Class)a0;
- (void)logToHumanReadableTrace:(id)a0;

@end
