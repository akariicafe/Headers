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

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)imageWithScale:(double)a0;
- (id)URLForImageWithScale:(double)a0;
- (void)downloadImageForPreferredLanguages:(id)a0 scale:(double)a1 fileDownloader:(id)a2 completion:(id /* block */)a3;
- (void)downloadImageWithScale:(double)a0 fileDownloader:(id)a1 completion:(id /* block */)a2;
- (BOOL)hasCachedImageWithScale:(double)a0;
- (id)imageFilePathForImageModel:(id)a0;
- (id)imageFilePathOnDiskForPreferredLanguages:(id)a0 scale:(double)a1;
- (id)imageForPreferredLanguages:(id)a0 scale:(double)a1;
- (id)initWithIdentifier:(id)a0 imageData:(id)a1 credentialType:(long long)a2;
- (id)initWithLegacyDictionary:(id)a0 identifier:(id)a1;
- (BOOL)isSupportedByDevice:(id)a0;

@end
