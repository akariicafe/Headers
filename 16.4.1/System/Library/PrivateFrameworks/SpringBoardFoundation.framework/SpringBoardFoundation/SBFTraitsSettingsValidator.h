@class NSString, SBFTraitsSettingsOrientation;

@interface SBFTraitsSettingsValidator : NSObject <SBFTraitsSettingsValidating>

@property (nonatomic, getter=didValidateOrientationSettings) BOOL orientationSettingsValidated;
@property (copy, nonatomic) NSString *orientationSettingsValidatedReason;
@property (copy, nonatomic) SBFTraitsSettingsOrientation *orientationSettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)validateOrientationSettingsWithBlock:(id /* block */)a0;
- (void).cxx_destruct;

@end
