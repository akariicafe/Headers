@class NSString;

@interface TSDContentAnimation : NSObject <TSDContentAnimationTiming>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)animation;

@end
