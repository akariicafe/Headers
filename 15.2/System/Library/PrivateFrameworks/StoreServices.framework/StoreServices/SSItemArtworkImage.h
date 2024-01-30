@class NSString, NSURL, NSMutableDictionary;

@interface SSItemArtworkImage : NSObject <SSXPCCoding, NSCopying> {
    NSMutableDictionary *_dictionary;
}

@property (readonly, nonatomic) struct CGSize { double x0; double x1; } imageSize;
@property (copy, nonatomic) NSString *imageKind;
@property (retain, nonatomic) NSURL *URL;
@property (readonly, nonatomic) NSString *URLString;
@property (readonly, nonatomic) long long height;
@property (readonly, nonatomic) long long width;
@property (readonly, nonatomic) long long imageOrientation;
@property (readonly, nonatomic) double imageScale;
@property (readonly, nonatomic, getter=isPrerendered) BOOL prerendered;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_setValue:(id)a0 forKey:(id)a1;
- (id)valueForProperty:(id)a0;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)setImageKindWithTypeName:(id)a0 variantName:(id)a1;
- (void)setValue:(id)a0 forProperty:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithArtworkDictionary:(id)a0;

@end
