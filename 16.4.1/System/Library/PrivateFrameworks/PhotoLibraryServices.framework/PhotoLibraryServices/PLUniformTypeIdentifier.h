@class NSString;

@interface PLUniformTypeIdentifier : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned int wellKnownFileType;
@property (readonly, nonatomic) short conformanceHint;
@property (readonly, nonatomic) NSString *compactRepresentation;
@property (readonly, copy, nonatomic) NSString *identifier;

+ (id)utiWithCompactRepresentation:(id)a0 conformanceHint:(short)a1;
+ (id)quicktimeUniformTypeIdentifier;
+ (id)utiWithIdentifier:(id)a0;
+ (id)plistUniformTypeIdentifier;
+ (id)videoComplementUniformTypeIdentifier;
+ (BOOL)isPlayableVideoTypeIdentifierString:(id)a0;
+ (id)jpegUniformTypeIdentifier;

- (BOOL)isEqualToUniformTypeIdentifier:(id)a0;
- (BOOL)conformsToMovie;
- (BOOL)conformsToData;
- (BOOL)isLosslessEncoding;
- (BOOL)conformsToRawImage;
- (BOOL)isPlayableVideo;
- (BOOL)conformsToJPEG;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)preferredExtension;
- (BOOL)isPrimaryImageFormat;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (BOOL)isDynamic;
- (id)description;
- (BOOL)conformsToAudio;
- (BOOL)conformsToImage;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 compactRepresentation:(id)a1 conformanceHint:(short)a2;

@end
