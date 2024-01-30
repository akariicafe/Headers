@class NSString;

@interface PLUniformTypeIdentifier : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned int wellKnownFileType;
@property (readonly, nonatomic) short conformanceHint;
@property (readonly, nonatomic) NSString *compactRepresentation;
@property (readonly, copy, nonatomic) NSString *identifier;

+ (id)utiWithIdentifier:(id)a0;
+ (id)utiWithCompactRepresentation:(id)a0 conformanceHint:(short)a1;
+ (id)jpegUniformTypeIdentifier;
+ (id)quicktimeUniformTypeIdentifier;
+ (BOOL)isPlayableVideoTypeIdentifierString:(id)a0;
+ (id)plistUniformTypeIdentifier;
+ (id)videoComplementUniformTypeIdentifier;

- (BOOL)conformsToData;
- (BOOL)conformsToImage;
- (id)initWithIdentifier:(id)a0 compactRepresentation:(id)a1 conformanceHint:(short)a2;
- (BOOL)isPrimaryImageFormat;
- (id)description;
- (BOOL)isPlayableVideo;
- (BOOL)conformsToAudio;
- (BOOL)isEqualToUniformTypeIdentifier:(id)a0;
- (BOOL)isLosslessEncoding;
- (id)preferredExtension;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)conformsToJPEG;
- (BOOL)conformsToRawImage;
- (BOOL)isDynamic;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)conformsToMovie;
- (unsigned long long)hash;

@end
