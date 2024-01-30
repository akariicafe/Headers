@class NSLocale;

@interface BCSLocaleHelper : NSObject <BCSLocaleHelperProtocol>

@property (readonly, nonatomic) NSLocale *currentLocale;

- (id)description;

@end
