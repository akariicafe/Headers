@interface TCXmlTextWriterProvider : NSObject

@property (readonly, nonatomic) struct _xmlTextWriter { } *textWriter;

- (BOOL)setUp;
- (BOOL)tearDown;
- (void)dealloc;
- (BOOL)setUpWithTextWriter:(struct _xmlTextWriter { } *)a0;

@end
