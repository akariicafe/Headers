@class NSString, NSNumber;

@interface SXFontAttributes : NSObject <SXFontAttributes>

@property (readonly, nonatomic) NSString *familyName;
@property (readonly, nonatomic) long long weight;
@property (readonly, nonatomic) long long style;
@property (readonly, nonatomic) long long width;
@property (readonly, nonatomic) NSNumber *grade;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)stringForWidth:(long long)a0;
- (id)stringForStyle:(long long)a0;
- (id)initWithFamilyName:(id)a0 weight:(long long)a1 width:(long long)a2 style:(long long)a3;
- (id)initWithFamilyName:(id)a0 weight:(long long)a1 width:(long long)a2 style:(long long)a3 grade:(id)a4;
- (id)stringForWeight:(long long)a0;

@end
