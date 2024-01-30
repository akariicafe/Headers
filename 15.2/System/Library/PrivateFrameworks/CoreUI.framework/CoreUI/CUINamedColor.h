@class NSString;

@interface CUINamedColor : CUINamedLookup {
    struct CGColor { } *_cgColor;
}

@property (readonly, nonatomic) struct CGColor { } *cgColor;
@property (readonly, nonatomic) BOOL substituteWithSystemColor;
@property (readonly, nonatomic) NSString *systemColorName;

- (id)initWithName:(id)a0 usingRenditionKey:(id)a1 fromTheme:(unsigned long long)a2;
- (void)dealloc;

@end
