@class NSArray, SKUIImageViewElement;

@interface SKUIVideoViewElement : SKUIViewElement {
    char _enabled;
}

@property (readonly, nonatomic) NSArray *assets;
@property (readonly, nonatomic) long long itemIdentifier;
@property (readonly, nonatomic) long long kind;
@property (readonly, nonatomic) long long playbackStyle;
@property (readonly, nonatomic) SKUIImageViewElement *thumbnailImage;

- (BOOL)isEnabled;
- (void).cxx_destruct;
- (id)applyUpdatesWithElement:(id)a0;
- (id)initWithDOMElement:(id)a0 parent:(id)a1 elementFactory:(id)a2;

@end
