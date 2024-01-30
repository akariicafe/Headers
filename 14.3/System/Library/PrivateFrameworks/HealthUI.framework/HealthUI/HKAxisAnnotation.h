@class NSAttributedString;

@interface HKAxisAnnotation : NSObject

@property (readonly, nonatomic) NSAttributedString *annotationText;
@property (readonly, nonatomic) id position;

- (void).cxx_destruct;
- (id)initWithAnnotation:(id)a0 position:(id)a1;

@end
