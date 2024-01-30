@class NSString, NSLocale;

@interface WLKLocale : NSObject

@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSLocale *locale;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
