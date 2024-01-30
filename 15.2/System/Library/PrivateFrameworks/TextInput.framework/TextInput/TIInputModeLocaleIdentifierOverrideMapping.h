@class NSDictionary;

@interface TIInputModeLocaleIdentifierOverrideMapping : NSObject

@property (readonly, nonatomic) NSDictionary *overrideMapping;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)overrideLocaleForIdentifier:(id)a0;
- (unsigned char)localeIdentifierHasOverride:(id)a0;

@end
