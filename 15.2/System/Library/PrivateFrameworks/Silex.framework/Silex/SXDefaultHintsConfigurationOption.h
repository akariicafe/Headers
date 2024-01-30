@class NSString;

@interface SXDefaultHintsConfigurationOption : NSObject <SXHintsConfigurationOption>

@property (readonly, nonatomic) BOOL ignoreConditionHints;
@property (readonly, nonatomic) BOOL ignoreConditionalHints;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
