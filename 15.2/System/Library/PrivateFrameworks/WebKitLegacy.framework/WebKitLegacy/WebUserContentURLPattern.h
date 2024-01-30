@class WebUserContentURLPatternPrivate;

@interface WebUserContentURLPattern : NSObject {
    WebUserContentURLPatternPrivate *_private;
}

- (id)host;
- (id)scheme;
- (BOOL)matchesURL:(id)a0;
- (void)dealloc;
- (BOOL)isValid;
- (id)initWithPatternString:(id)a0;
- (BOOL)matchesSubdomains;

@end
