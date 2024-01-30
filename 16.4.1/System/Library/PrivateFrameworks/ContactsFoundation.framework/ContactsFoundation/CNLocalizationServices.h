@class NSString;

@interface CNLocalizationServices : NSObject <CNLocalizationServices>

@property (class, readonly) CNLocalizationServices *defaultServices;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)localizedStringForKey:(id)a0 value:(id)a1 table:(id)a2 bundleForClass:(Class)a3 comment:(id)a4;

@end
