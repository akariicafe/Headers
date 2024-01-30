@class NSString;

@interface PUPXOneUpPresentationConfiguration : NSObject <PXOneUpPresentationConfiguration>

@property (readonly, nonatomic) long long pu_interactiveMode;
@property (readonly, nonatomic) unsigned long long pu_activity;
@property (nonatomic, getter=isAnimated) BOOL animated;
@property (nonatomic) long long interactiveMode;
@property (nonatomic) unsigned long long activity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;

@end
