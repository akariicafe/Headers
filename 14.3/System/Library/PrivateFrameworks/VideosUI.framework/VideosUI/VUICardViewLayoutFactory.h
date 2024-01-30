@class VUICardViewLayout;

@interface VUICardViewLayoutFactory : NSObject {
    VUICardViewLayout *_phoneLayout;
    VUICardViewLayout *_padLayout;
    VUICardViewLayout *_tvLayout;
}

@property (readonly, nonatomic) long long cardLayoutType;
@property (readonly, nonatomic) long long gridStyle;
@property (readonly, nonatomic) long long gridType;

+ (id)cardViewFactoryForType:(long long)a0 gridStyle:(long long)a1 gridType:(long long)a2;

- (id)activeLayout;
- (void).cxx_destruct;
- (id)initWithCardLayoutType:(long long)a0 gridStyle:(long long)a1 gridType:(long long)a2;
- (id)_layoutForCardLayoutType:(long long)a0 interfaceIdiom:(long long)a1;
- (id)featuredCardViewLayoutForIdiom:(long long)a0;
- (id)upnextCardViewLayoutForIdiom:(long long)a0;
- (id)standardCardViewLayoutForIdiom:(long long)a0;
- (id)editorialCardViewLayout;
- (id)videoLockupCardViewLayout;
- (id)decoratedShelfLockupCardViewLayout;
- (id)shadowForCardImageLayout;

@end
