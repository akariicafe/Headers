@class NSString;

@interface SXTextSourceFontAttributes : SXFontAttributes <SXFontAttributes>

@property (readonly, nonatomic) NSString *familyName;
@property (readonly, nonatomic) long long weight;
@property (readonly, nonatomic) long long style;
@property (readonly, nonatomic) long long width;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)attributesWithFamilyName:(id)a0 style:(long long)a1 weight:(long long)a2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
