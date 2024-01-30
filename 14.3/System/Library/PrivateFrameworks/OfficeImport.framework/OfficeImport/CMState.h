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
- (long long)textLevel;
- (void)pushTextLevel;
- (void)popTextLevel;
- (void)copyFromCMStateWithoutComponents:(id)a0;
- (id)getHtmlResource;
- (void)setHtmlResource:(id)a0;
- (id)resourceUrlPrefix;
- (id)componentByName:(id)a0;
- (void)setComponentWithName:(id)a0 value:(id)a1;
- (void)setResourceUrlPrefix:(id)a0;
- (BOOL)isOffice12;

@end
