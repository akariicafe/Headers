@class NSString;

@interface UPContextualizerStrategyCancel : NSObject <UPContextualizerStrategy>

@property (readonly, nonatomic) double prebuiltIntentThreshold;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)resultUsingContextualizerInput:(id)a0;
- (id)initWithPrebuiltIntentThreshold:(double)a0;

@end
