@class SGMIMetricsMailIntelligenceForMessage;

@interface SGMIStagedLogRecord : NSObject

@property (readonly) SGMIMetricsMailIntelligenceForMessage *log;
@property (readonly) BOOL isLogged;

- (void).cxx_destruct;
- (id)initWithLog:(id)a0 isLogged:(BOOL)a1;

@end
