@class NSString, NSURL, NSMutableDictionary;

@interface BLItemArtworkImage : NSObject <NSCopying> {
    NSMutableDictionary *_dictionary;
}

@property (readonly, nonatomic) struct CGSize { double x0; double x1; } imageSize;
@property (copy, nonatomic) NSString *imageKind;
@property (retain, nonatomic) NSURL *URL;
@property (readonly, nonatomic) NSString *URLString;
@property (readonly, nonatomic) double imageScale;

- (void)_setValue:(id)a0 forKey:(id)a1;
- (long long)height;
- (id)description;
- (long long)width;
- (id)valueForProperty:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)setImageKindWithTypeName:(id)a0 variantName:(id)a1;
- (void)setValue:(id)a0 forProperty:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithArtworkDictionary:(id)a0;

@end
