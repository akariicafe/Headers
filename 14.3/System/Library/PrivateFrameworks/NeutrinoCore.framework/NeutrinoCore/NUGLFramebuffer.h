@class NSMutableDictionary;

@interface NUGLFramebuffer : NUGLObject {
    NSMutableDictionary *_attachments;
}

- (void)delete;
- (id)init;
- (void).cxx_destruct;
- (void)removeAllAttachments;
- (void)generate:(id)a0;
- (void)read:(id)a0 block:(id /* block */)a1;
- (void)write:(id)a0 block:(id /* block */)a1;
- (void)attach:(id)a0 to:(unsigned int)a1;
- (void)detach:(id)a0 from:(unsigned int)a1;
- (void)useWithTarget:(unsigned int)a0 context:(id)a1 block:(id /* block */)a2;
- (void)bind:(unsigned int)a0 context:(id)a1;
- (void)unbind:(unsigned int)a0 context:(id)a1;

@end
