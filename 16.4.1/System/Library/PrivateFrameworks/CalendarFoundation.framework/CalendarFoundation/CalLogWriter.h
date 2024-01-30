@class NSString;
@protocol CalLogFormatter;

@interface CalLogWriter : NSObject <CalLogWriter>

@property (retain, nonatomic) id<CalLogFormatter> formatter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)write:(id)a0;
- (id)initWithParameters:(id)a0;
- (BOOL)flush;
- (id)init;
- (void).cxx_destruct;

@end
