@class NSURL;

@interface CoreDAVHrefItem : CoreDAVLeafItem

@property (retain, nonatomic) NSURL *baseURL;
@property (nonatomic) int writeStyle;

- (void)parserSuggestsBaseURL:(id)a0;
- (id)payloadAsFullURL;
- (id)initWithURL:(id)a0;
- (id)initWithURL:(id)a0 baseURL:(id)a1;
- (id)payloadAsOriginalURL;
- (id)description;
- (void).cxx_destruct;
- (void)write:(id)a0;
- (id)init;

@end
