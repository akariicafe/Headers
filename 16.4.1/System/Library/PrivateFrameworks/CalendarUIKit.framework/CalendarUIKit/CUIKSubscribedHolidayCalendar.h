@class NSString, NSURL, NSLocale;

@interface CUIKSubscribedHolidayCalendar : NSObject {
    NSString *_cachedLocalizedDescription;
    NSString *_cachedDescriptionInLocaleLanguage;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _localizedDescriptionCacheLock;
}

@property (retain, nonatomic) NSString *countryCode;
@property (readonly, nonatomic) NSLocale *locale;
@property (readonly, nonatomic) NSString *languageCode;
@property (readonly, nonatomic) NSURL *URL;

- (id)localizedDescription;
- (id)localizedTitle;
- (void).cxx_destruct;
- (id)descriptionInLocaleLanguage;
- (id)initWithLocale:(id)a0 languageCode:(id)a1 URL:(id)a2;

@end
