@class NSString, CHRecognitionSessionIndexableContent;

@interface PKIndexableContent : NSObject

@property (retain) CHRecognitionSessionIndexableContent *chIndexableContent;
@property (readonly, nonatomic) NSString *indexableTextRepresentation;
@property (readonly, nonatomic) NSString *presentableTextRepresentation;

- (void).cxx_destruct;
- (id)initWithIndexableContent:(id)a0;

@end
