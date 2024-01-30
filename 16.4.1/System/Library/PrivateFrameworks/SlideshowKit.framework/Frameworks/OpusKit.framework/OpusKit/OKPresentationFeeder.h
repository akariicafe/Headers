@class NSString, NSMutableDictionary;

@interface OKPresentationFeeder : OKPresentationCanvas {
    NSMutableDictionary *_internalSettings;
}

@property (copy, nonatomic) NSString *className;

+ (id)feederWithName:(id)a0 className:(id)a1 settings:(id)a2;

- (id)dictionary;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)init;
- (void)resolveIfNeeded;
- (id)initWithDictionary:(id)a0 andName:(id)a1 forPresentation:(id)a2;

@end
