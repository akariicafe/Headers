@class NSData, UIImage, NSString;

@interface CNUILikenessSystemImageBadge : NSObject <CNUILikenessBadge>

@property (readonly, nonatomic) NSData *imageData;
@property (readonly, nonatomic) UIImage *image;
@property (nonatomic) unsigned long long badgeType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithSystemImageNamed:(id)a0;

@end
