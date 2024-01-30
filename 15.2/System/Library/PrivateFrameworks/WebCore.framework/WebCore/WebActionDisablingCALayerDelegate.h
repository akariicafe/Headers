@class NSString;

@interface WebActionDisablingCALayerDelegate : NSObject <CALayerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (id)actionForLayer:(id)a0 forKey:(id)a1;

@end
