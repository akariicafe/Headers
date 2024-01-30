@class NSString;

@interface CHRecognitionSessionIndexableContent : NSObject

@property (readonly, copy, nonatomic) NSString *indexableTextRepresentation;
@property (readonly, copy, nonatomic) NSString *presentableTextRepresentation;

- (void)dealloc;
- (id)initWithIndexableTextRepresentation:(id)a0 presentableTextRepresentation:(id)a1;

@end
