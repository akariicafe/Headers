@class WBSOpenSearchURLTemplate, NSString, NSDate, WBSOpenSearchDescription;
@protocol WBSQuickWebsiteSearchProviderDelegate;

@interface WBSQuickWebsiteSearchProvider : NSObject {
    id<WBSQuickWebsiteSearchProviderDelegate> _delegate;
    NSString *_displayName;
    NSString *_hostname;
}

@property (readonly, nonatomic) NSString *sourcePageURLString;
@property (readonly, nonatomic) NSDate *dateAdded;
@property (retain, nonatomic) WBSOpenSearchURLTemplate *searchURLTemplateFromForm;
@property (copy, nonatomic) NSString *openSearchDescriptionURLString;
@property (copy, nonatomic) NSDate *dateOfLastSearch;
@property (readonly, nonatomic) WBSOpenSearchDescription *openSearchDescription;
@property (readonly, nonatomic) WBSOpenSearchURLTemplate *searchURLTemplate;
@property (readonly, nonatomic) WBSOpenSearchURLTemplate *urlTemplateForSuggestionsInJSON;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSString *hostname;

- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (id)initWithSourcePageURLString:(id)a0 searchURLTemplateFromForm:(id)a1 delegate:(id)a2;
- (id)initWithDictionaryRepresentation:(id)a0 delegate:(id)a1;
- (id)initWithSourcePageURLString:(id)a0 openSearchDescriptionURLString:(id)a1 delegate:(id)a2;

@end
