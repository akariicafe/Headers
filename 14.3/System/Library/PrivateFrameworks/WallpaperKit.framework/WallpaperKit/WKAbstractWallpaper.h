@class NSString, NAIdentity, NADescriptionBuilder;

@interface WKAbstractWallpaper : NSObject <WKDescribable, NAIdentifiable, WKWallpaper>

@property (class, readonly, nonatomic) NAIdentity *na_identity;

@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long backingType;
@property (readonly, nonatomic) NADescriptionBuilder *wk_descriptionBuilder;
@property (readonly, copy, nonatomic) NSString *description;
@property (readonly, nonatomic) id /* block */ descriptionBuilderBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long identifier;
@property (readonly, copy, nonatomic) NSString *name;

+ (id)new;

- (id)init;
- (id)initWithIdentifier:(long long)a0 name:(id)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;

@end
