@interface PLFaceDimension : NSObject <PFPhotosFaceRepresentation> {
    long long _sourceWidth;
    long long _sourceHeight;
    double _centerX;
    double _centerY;
    double _size;
}

- (double)photosFaceRepresentationSize;
- (double)photosFaceRepresentationBlurScore;
- (id)photosFaceRepresentationLocalIdentifier;
- (double)photosFaceRepresentationQuality;
- (id)description;
- (long long)photosFaceRepresentationSourceHeight;
- (double)photosFaceRepresentationCenterX;
- (double)photosFaceRepresentationCenterY;
- (long long)photosFaceRepresentationQualityMeasure;
- (double)photosFaceRepresentationRoll;
- (BOOL)photosFaceRepresentationIsLeftEyeClosed;
- (id)initWithSourceWidth:(long long)a0 sourceHeight:(long long)a1 centerX:(double)a2 centerY:(double)a3 size:(double)a4;
- (BOOL)photosFaceRepresentationIsRightEyeClosed;
- (long long)photosFaceRepresentationClusterSequenceNumber;
- (long long)photosFaceRepresentationSourceWidth;
- (BOOL)photosFaceRepresentationHasSmile;

@end
