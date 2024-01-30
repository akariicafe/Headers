@class NSMutableDictionary, OADColorScheme, NSString, OCDDocument, OADColorMap;

@interface CMState : NSObject {
    NSMutableDictionary *components;
    NSMutableDictionary *htmlResource;
    NSString *mResourceUrlPrefix;
    long long _textLevel;
}

@property (retain) OADColorMap *colorMap;
@property (retain) OADColorScheme *colorScheme;
@property (retain) id resources;
@property (retain) OCDDocument *document;
@property unsigned long long sourceFormat;
@property BOOL isThumbnail;
@property BOOL isOnPhone;

- (id)init;
- (void).cxx_destruct;
- (id)getHtmlResource;
- (id)componentByName:(id)a0;
- (void)copyFromCMStateWithoutComponents:(id)a0;
- (BOOL)isOffice12;
- (void)popTextLevel;
- (void)pushTextLevel;
- (id)resourceUrlPrefix;
- (void)setComponentWithName:(id)a0 value:(id)a1;
- (void)setHtmlResource:(id)a0;
- (void)setResourceUrlPrefix:(id)a0;
- (long long)textLevel;

@end
