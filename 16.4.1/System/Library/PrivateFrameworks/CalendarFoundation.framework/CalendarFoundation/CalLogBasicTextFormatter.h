@class NSString, NSDateFormatter;

@interface CalLogBasicTextFormatter : NSObject <CalLogFormatter>

@property (retain, nonatomic) NSDateFormatter *dateFormatter;
@property (nonatomic) BOOL includeFunction;
@property (nonatomic) BOOL includeLevel;
@property (nonatomic) BOOL includeLogName;
@property (nonatomic) BOOL includeMessage;
@property (nonatomic) BOOL includeProcessID;
@property (nonatomic) BOOL includeProcessName;
@property (nonatomic) BOOL includeMachPort;
@property (nonatomic) BOOL includeTimestamp;
@property (nonatomic) BOOL includeEnvelopePartNames;
@property (nonatomic) BOOL useTinyEnvelopePartNames;
@property (nonatomic) BOOL useCompactForm;
@property (nonatomic) BOOL usePrettyTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)newFormattedString:(id)a0;

@end
