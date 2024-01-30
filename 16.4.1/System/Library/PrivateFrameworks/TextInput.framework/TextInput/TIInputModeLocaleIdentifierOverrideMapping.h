@class NSDictionary;

@interface TIInputModeLocaleIdentifierOverrideMapping : NSObject

@property (readonly, nonatomic) NSDictionary *overrideMapping;

+ (id)sharedInstance;

- (id)overrideLocaleForIdentifier:(id)a0;
- (unsigned char)localeIdentifierHasOverride:(id)a0;
- (void).cxx_destruct;

@end
