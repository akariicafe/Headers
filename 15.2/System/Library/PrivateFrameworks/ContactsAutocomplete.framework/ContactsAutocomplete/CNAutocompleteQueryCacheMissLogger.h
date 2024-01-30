@class NSArray, NSString;

@interface CNAutocompleteQueryCacheMissLogger : NSObject <CNAutocompleteQueryCacheMissLogging>

@property (copy) NSArray *loggers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (id)initWithLoggers:(id)a0;
- (void)didReturnCacheFalseNegatives:(id)a0;
- (void)didReturnCacheFalsePositives:(id)a0;

@end
