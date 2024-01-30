@class AXPTranslationObject, NSString;

@interface AXPIOSPlatformElement : UIAccessibilityElement <AXPTranslationElementProtocol>

@property (retain, nonatomic) AXPTranslationObject *translation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)platformElementWithTranslationObject:(id)a0;
+ (id)platformElementWithTranslationObject:(id)a0 rootParent:(id)a1;

- (void).cxx_destruct;

@end
