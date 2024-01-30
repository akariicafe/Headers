@interface PKDiscoveryCardViewTemplateInformation : NSObject <NSCopying>

@property (nonatomic) long long cardSize;
@property (nonatomic) long long displayType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)updateCardSize:(long long)a0;
- (id)initWithCardSize:(long long)a0 displayType:(long long)a1;

@end
