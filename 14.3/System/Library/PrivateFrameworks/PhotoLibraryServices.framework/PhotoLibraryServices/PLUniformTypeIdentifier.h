@class NSString, NSNumber;

@interface PLUniformTypeIdentifier : PLManagedObject <PLUniformTypeIdentifierIdentity> {
    NSNumber *_isLosslessEncoding;
    NSNumber *_conformsToJPEG;
}

@property (nonatomic) BOOL conformsToRawImage;
@property (nonatomic) BOOL conformsToImage;
@property (nonatomic) BOOL conformsToMovie;
@property (copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL conformsToAudio;
@property (readonly, nonatomic) BOOL conformsToJPEG;
@property (readonly, nonatomic) BOOL conformsToData;
@property (readonly, nonatomic, getter=isDynamic) BOOL dynamic;
@property (readonly, nonatomic) BOOL isPlayableVideo;
@property (readonly, nonatomic) BOOL isLosslessEncoding;
@property (readonly, copy, nonatomic) NSString *preferredExtension;
@property (readonly, nonatomic, getter=isPrimaryImageFormat) BOOL primaryImageFormat;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)uniformTypeIdentifierFromString:(id)a0 createIfMissing:(BOOL)a1 context:(id)a2;
+ (id)entityName;
+ (void)applyPersistedConformanceValuesToUTI:(id)a0;
+ (id)plistUniformTypeIdentifierInContext:(id)a0;
+ (BOOL)isPlayableVideoTypeIdentifierString:(id)a0;
+ (id)videoComplementUniformTypeIdentifierInContext:(id)a0;
+ (id)_commonConformanceValuesForUTIString:(id)a0;
+ (id)utisConformingToRAWInContext:(id)a0;
+ (id)jpegUniformTypeIdentifierInContext:(id)a0;

@end
