@class NSUUID, NSArray, NSString, VKQuad, NSMutableDictionary;

@interface VKVideoTextRecognizerItem : NSObject {
    NSMutableDictionary *_strings;
}

@property (readonly, nonatomic) NSUUID *uuid;
@property (retain, nonatomic) VKQuad *originalBoundingQuad;
@property (retain, nonatomic) VKQuad *boundingQuad;
@property (retain, nonatomic) NSArray *originalPoints;
@property (retain, nonatomic) NSArray *points;
@property (readonly, nonatomic) NSString *string;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[3]; } warpTransform;

- (id)dictionaryRepresentation;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)didRecognizeString:(id)a0;
- (id)matrix3x3TransformToDictionaryRepresentation:(struct { void /* unknown type, empty encoding */ x0[3]; })a0;
- (id)pointsToDictionaryRepresentation:(id)a0;

@end
