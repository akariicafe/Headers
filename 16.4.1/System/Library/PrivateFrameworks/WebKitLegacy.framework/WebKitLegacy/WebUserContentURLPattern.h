@class WebUserContentURLPatternPrivate;

@interface WebUserContentURLPattern : NSObject {
    WebUserContentURLPatternPrivate *_private;
}

- (id)host;
- (id)scheme;
- (BOOL)isValid;
- (void)dealloc;
- (BOOL)matchesURL:(id)a0;
- (id)initWithPatternString:(id)a0;
- (BOOL)matchesSubdomains;

@end
