@interface CLSFaceInformation : NSObject

@property (readonly) double faceSize;
@property (readonly) double faceQuality;
@property (readonly) BOOL isKnownPerson;
@property (readonly) BOOL isHiddenPerson;
@property (readonly) unsigned char faceSizeIsGood : 1;
@property (readonly) unsigned char faceIsGood : 1;
@property (readonly) unsigned char faceIsOk : 1;

- (id)description;
- (id)initForKnownPersonWithFaceSize:(double)a0 faceQuality:(double)a1 faceSizeIsGood:(BOOL)a2 faceIsGood:(BOOL)a3 faceIsOk:(BOOL)a4;
- (id)initForHiddenPersonWithFaceSize:(double)a0 faceQuality:(double)a1 faceSizeIsGood:(BOOL)a2 faceIsGood:(BOOL)a3 faceIsOk:(BOOL)a4;
- (id)initForUnknownPersonWithFaceSize:(double)a0 faceQuality:(double)a1 faceSizeIsGood:(BOOL)a2 faceIsGood:(BOOL)a3 faceIsOk:(BOOL)a4;

@end
