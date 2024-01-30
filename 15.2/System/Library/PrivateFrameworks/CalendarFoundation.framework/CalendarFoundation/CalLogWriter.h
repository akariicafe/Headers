@class NSString;
@protocol CalLogFormatter;

@interface CalLogWriter : NSObject <CalLogWriter>

@property (retain, nonatomic) id<CalLogFormatter> formatter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)flush;
- (void).cxx_destruct;
- (void)write:(id)a0;
- (id)init;
- (id)initWithParameters:(id)a0;

@end
