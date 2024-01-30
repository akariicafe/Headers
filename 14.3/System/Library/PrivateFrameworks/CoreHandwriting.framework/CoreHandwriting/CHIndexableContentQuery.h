@class CHRecognitionSessionIndexableContent;

@interface CHIndexableContentQuery : CHQuery

@property (retain, setter=_setIndexableContent:) CHRecognitionSessionIndexableContent *indexableContent;

- (void)dealloc;
- (id)debugName;
- (id)initWithRecognitionSession:(id)a0;
- (void)q_updateQueryResult;

@end
