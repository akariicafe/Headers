@class NSString;

@interface LPHTMLLinkComponent : LPHTMLComponent <DOMEventListener>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)styleSet;
+ (id)ruleDictionaryForStyle:(id)a0;
+ (id)ruleDictionaryForStyleWithDarkInterface:(id)a0;
+ (id)baseRules;
+ (id)additionalRulesForStyle:(id)a0;

- (void)handleEvent:(id)a0;
- (id)initWithURL:(id)a0 generator:(id)a1;

@end
