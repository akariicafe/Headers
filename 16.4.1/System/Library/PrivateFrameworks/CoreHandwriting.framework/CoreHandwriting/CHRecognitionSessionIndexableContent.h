@class NSString;

@interface CHRecognitionSessionIndexableContent : NSObject

@property (readonly, copy, nonatomic) NSString *indexableTextRepresentation;
@property (readonly, copy, nonatomic) NSString *presentableTextRepresentation;

- (void).cxx_destruct;
- (id)initWithIndexableTextRepresentation:(id)a0 presentableTextRepresentation:(id)a1;

@end
