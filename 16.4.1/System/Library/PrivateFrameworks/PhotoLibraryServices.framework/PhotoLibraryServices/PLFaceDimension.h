@interface PLFaceDimension : NSObject <PFPhotosFaceRepresentation> {
    long long _sourceWidth;
    long long _sourceHeight;
    double _centerX;
    double _centerY;
    double _size;
}

- (id)description;
- (double)photosFaceRepresentationCenterX;
- (double)photosFaceRepresentationQuality;
- (double)photosFaceRepresentationCenterY;
- (id)initWithSourceWidth:(long long)a0 sourceHeight:(long long)a1 centerX:(double)a2 centerY:(double)a3 size:(double)a4;
- (double)photosFaceRepresentationBlurScore;
- (long long)photosFaceRepresentationClusterSequenceNumber;
- (BOOL)photosFaceRepresentationHasSmile;
- (BOOL)photosFaceRepresentationIsLeftEyeClosed;
- (BOOL)photosFaceRepresentationIsRightEyeClosed;
- (id)photosFaceRepresentationLocalIdentifier;
- (long long)photosFaceRepresentationQualityMeasure;
- (double)photosFaceRepresentationRoll;
- (double)photosFaceRepresentationSize;
- (long long)photosFaceRepresentationSourceHeight;
- (long long)photosFaceRepresentationSourceWidth;

@end
