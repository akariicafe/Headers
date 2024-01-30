@class NSArray;

@interface CLSFaceInformation : NSObject

@property (readonly) double faceSize;
@property (readonly) double faceQuality;
@property (readonly) BOOL isKnownPerson;
@property (readonly) BOOL isHiddenPerson;
@property (readonly) unsigned char faceSizeIsGood : 1;
@property (readonly) unsigned char faceIsGood : 1;
@property (readonly) unsigned char faceIsOk : 1;
@property (readonly) NSArray *traits;

+ (id)_traitsFromTraitsPropertyListRepresentation:(id)a0;

- (id)initWithDictionaryRepresentation:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initForKnownPersonWithFaceSize:(double)a0 faceQuality:(double)a1 faceSizeIsGood:(BOOL)a2 faceIsGood:(BOOL)a3 faceIsOk:(BOOL)a4 traits:(id)a5;
- (id)initForHiddenPersonWithFaceSize:(double)a0 faceQuality:(double)a1 faceSizeIsGood:(BOOL)a2 faceIsGood:(BOOL)a3 faceIsOk:(BOOL)a4 traits:(id)a5;
- (id)initForUnknownPersonWithFaceSize:(double)a0 faceQuality:(double)a1 faceSizeIsGood:(BOOL)a2 faceIsGood:(BOOL)a3 faceIsOk:(BOOL)a4 traits:(id)a5;
- (id)_initWithFaceSize:(double)a0 faceQuality:(double)a1 isKnownPerson:(BOOL)a2 isHiddenPerson:(BOOL)a3 faceSizeIsGood:(BOOL)a4 faceIsGood:(BOOL)a5 faceIsOk:(BOOL)a6 traits:(id)a7;
- (id)_propertyListRepresentationOfTraits;

@end
