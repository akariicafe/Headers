@class SUClientInterface, NSString, NSURL, NSArray, SUPageSectionGroup, UIImage, SUSearchFieldConfiguration, NSMutableDictionary, SUGradient, UIColor;

@interface SUSection : NSObject {
    SUClientInterface *_clientInterface;
    NSMutableDictionary *_dictionary;
    NSMutableDictionary *_sectionButtonImages;
}

@property (retain, nonatomic) SUSearchFieldConfiguration *searchFieldConfiguration;
@property (readonly, nonatomic) SUGradient *backgroundGradient;
@property (readonly, nonatomic) long long defaultPNGStyle;
@property (readonly, nonatomic) UIColor *loadingIndicatorColor;
@property (readonly, nonatomic) UIColor *loadingTextColor;
@property (readonly, nonatomic) UIColor *loadingTextShadowColor;
@property (readonly, nonatomic, getter=isDefaultSection) BOOL defaultSection;
@property (readonly, nonatomic, getter=isTransient) BOOL transient;
@property (readonly, nonatomic, getter=isUsingLocalArtwork) BOOL usingLocalArtwork;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long minimumNetworkType;
@property (readonly, nonatomic) SUPageSectionGroup *pageSectionGroup;
@property (readonly, nonatomic) NSString *partnerHeader;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSString *urlBagKey;
@property (readonly, nonatomic) NSArray *itemImages;
@property (readonly, nonatomic) NSArray *leftSectionButtons;
@property (readonly, nonatomic) NSArray *rightSectionButtons;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIImage *moreListImage;
@property (retain, nonatomic) UIImage *selectedImage;
@property (retain, nonatomic) UIImage *selectedMoreListImage;

- (id)valueForProperty:(id)a0;
- (void)dealloc;
- (id)description;
- (id)initWithClientInterface:(id)a0 sectionType:(long long)a1 defaultPNGStyle:(long long)a2;
- (BOOL)loadFromDictionary:(id)a0 searchField:(id)a1;
- (long long)_typeForString:(id)a0;
- (id)_colorForKey:(id)a0;
- (id)_imageBaseName;
- (long long)_minimumNetworkTypeFromDictionary:(id)a0;
- (id)_sectionButtonsForKey:(id)a0;
- (id)imageForSectionButtonWithTag:(long long)a0;
- (id)initWithClientInterface:(id)a0;
- (void)setSectionButtonImage:(id)a0 forTag:(long long)a1;

@end
