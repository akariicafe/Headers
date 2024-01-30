@class NSString, NSURL;

@interface WBSTranslationContextSnapshot : NSObject

@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) NSString *targetLocale;
@property (retain, nonatomic) NSString *webpageLocale;
@property (retain, nonatomic) NSURL *webpageURL;

- (void).cxx_destruct;

@end
