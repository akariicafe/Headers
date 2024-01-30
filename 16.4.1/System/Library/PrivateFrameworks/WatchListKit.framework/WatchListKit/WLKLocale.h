@class NSString, NSLocale;

@interface WLKLocale : NSObject

@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSLocale *locale;

- (id)initWithDictionary:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
