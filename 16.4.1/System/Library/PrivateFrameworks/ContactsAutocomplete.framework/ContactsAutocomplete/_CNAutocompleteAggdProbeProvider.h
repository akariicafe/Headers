@class NSString;

@interface _CNAutocompleteAggdProbeProvider : NSObject <CNAutocompleteProbeProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)performanceProbe;
- (id)suggestionsProbe;
- (id)usageMonitorProbe;

@end
