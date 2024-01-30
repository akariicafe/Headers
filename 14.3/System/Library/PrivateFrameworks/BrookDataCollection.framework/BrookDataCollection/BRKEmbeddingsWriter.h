@class NSString;

@interface BRKEmbeddingsWriter : BRKWriter <BRKEmbeddingsWriter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPath:(id)a0;
- (void)close;
- (void)_lock_writeEmbedding:(id)a0;
- (void)_lock_writeMultiArray:(id)a0;
- (void)writeEmbedding:(id)a0;

@end
