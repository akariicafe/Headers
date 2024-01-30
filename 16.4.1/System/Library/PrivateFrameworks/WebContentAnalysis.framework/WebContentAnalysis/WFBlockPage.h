@class NSURL, NSString;

@interface WFBlockPage : NSObject {
    NSString *preferredLanguage;
}

@property (readonly) NSURL *pageTemplateURL;
@property (retain) NSString *userVisibleURLString;
@property (retain) NSString *formActionURLString;

- (id)page;
- (void)dealloc;
- (id)_fileContentWithName:(id)a0 extension:(id)a1;
- (id)_blockpage;
- (id)_css;
- (id)_initWithUsername:(id)a0 fileName:(id)a1;
- (id)initNoOveridePageWithUsername:(id)a0;
- (id)initWithUsername:(id)a0 overridesAllowded:(BOOL)a1;

@end
