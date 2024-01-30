@class DACoreDAVLogger;

@interface CalDAVHTTPTrafficLog : NSObject

@property (retain, nonatomic) DACoreDAVLogger *curLogger;

+ (id)instance;

- (BOOL)enabled;
- (id)init;
- (void).cxx_destruct;
- (void)logString:(id)a0;
- (void)logData:(id)a0;
- (void)finishSnippets;
- (void)logStringWithFormat:(id)a0;

@end
