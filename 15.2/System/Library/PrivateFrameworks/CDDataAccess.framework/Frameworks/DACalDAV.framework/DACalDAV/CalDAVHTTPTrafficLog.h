@class DACoreDAVLogger;

@interface CalDAVHTTPTrafficLog : NSObject

@property (retain, nonatomic) DACoreDAVLogger *curLogger;

+ (id)instance;

- (BOOL)enabled;
- (void).cxx_destruct;
- (id)init;
- (void)logData:(id)a0;
- (void)logString:(id)a0;
- (void)finishSnippets;
- (void)logStringWithFormat:(id)a0;

@end
