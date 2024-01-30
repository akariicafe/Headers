@class NSDictionary;

@interface ISSoftwareCapabilitiesDialogOperation : ISOperation {
    NSDictionary *_mismatches;
    id _requiredCapabilities;
}

@property (readonly) NSDictionary *mismatches;
@property (readonly) id requiredCapabilities;

- (void)run;
- (void)dealloc;
- (id)initWithRequiredCapabilities:(id)a0 mismatches:(id)a1;
- (void)_postDefaultDialog;

@end
