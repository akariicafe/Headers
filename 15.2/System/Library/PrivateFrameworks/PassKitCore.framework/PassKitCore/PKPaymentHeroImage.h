@class PKPaymentHeroImageSet, NSString, NSArray, PKOSVersionRequirementRange, NSData;

@interface PKPaymentHeroImage : NSObject {
    NSData *_imageData;
    PKPaymentHeroImageSet *_images;
}

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) PKOSVersionRequirementRange *versionRequirement;
@property (readonly, nonatomic) NSArray *requiredDeviceFeatures;
@property (readonly, nonatomic) long long credentialType;
@property (readonly, nonatomic) long long cardType;
@property (readonly, nonatomic) BOOL isBeta;

- (void)downloadImageForPreferredLanguages:(id)a0 scale:(double)a1 fileDownloader:(id)a2 completion:(id /* block */)a3;
- (id)imageWithScale:(double)a0;
- (BOOL)isSupportedByDevice:(id)a0;
- (BOOL)hasCachedImageWithScale:(double)a0;
- (id)imageFilePathForImageModel:(id)a0;
- (void).cxx_destruct;
- (void)downloadImageWithScale:(double)a0 fileDownloader:(id)a1 completion:(id /* block */)a2;
- (id)initWithDictionary:(id)a0;
- (id)URLForImageWithScale:(double)a0;
- (id)initWithIdentifier:(id)a0 imageData:(id)a1 credentialType:(long long)a2;
- (id)imageForPreferredLanguages:(id)a0 scale:(double)a1;
- (id)imageFilePathOnDiskForPreferredLanguages:(id)a0 scale:(double)a1;
- (id)initWithLegacyDictionary:(id)a0 identifier:(id)a1;

@end
