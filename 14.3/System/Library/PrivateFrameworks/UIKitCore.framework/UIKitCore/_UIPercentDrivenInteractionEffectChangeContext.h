@class NSString;

@interface _UIPercentDrivenInteractionEffectChangeContext : NSObject <UIInteractionContext>

@property (nonatomic) double progress;
@property (nonatomic) double maximumProgress;
@property (nonatomic) BOOL ended;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
