@class UIColor, NSString;

@interface ContactsUI.CNMonogramPosterConfigurationReader : NSObject {
    void /* unknown type, empty encoding */ monogramPosterConfiguration;
}

@property (class, nonatomic, readonly) BOOL canReadConfiguration;

@property (nonatomic, readonly) UIColor *backgroundColor;
@property (nonatomic, readonly) NSString *initials;

+ (id)monogramPosterConfigurationDataFromUserInfo:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithPosterConfigurationUserInfo:(id)a0;

@end
