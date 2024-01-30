@class CNAutocompleteAggdProbe, NSString;

@interface _CNAutocompleteQueryCacheMissAggdLogging : NSObject <CNAutocompleteQueryCacheMissLogging>

@property (readonly) CNAutocompleteAggdProbe *probe;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)didReturnCacheFalseNegatives:(id)a0;
- (void)didReturnCacheFalsePositives:(id)a0;
- (id)initWithProbe:(id)a0;

@end
