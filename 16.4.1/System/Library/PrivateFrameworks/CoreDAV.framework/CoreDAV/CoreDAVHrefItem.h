@class NSURL;

@interface CoreDAVHrefItem : CoreDAVLeafItem

@property (retain, nonatomic) NSURL *baseURL;
@property (nonatomic) int writeStyle;

- (id)initWithURL:(id)a0;
- (void)write:(id)a0;
- (id)initWithURL:(id)a0 baseURL:(id)a1;
- (id)payloadAsOriginalURL;
- (id)payloadAsFullURL;
- (id)init;
- (id)description;
- (void)parserSuggestsBaseURL:(id)a0;
- (void).cxx_destruct;

@end
