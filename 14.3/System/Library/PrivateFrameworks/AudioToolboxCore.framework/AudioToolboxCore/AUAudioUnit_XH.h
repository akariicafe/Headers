@class AUAudioUnit_XPC, NSUUID, NSExtension, NSObject;
@protocol OS_dispatch_queue;

@interface AUAudioUnit_XH : AUAudioUnit_XPC {
    NSExtension *_extension;
    NSUUID *_requestIdentifier;
    NSObject<OS_dispatch_queue> *_viewControllerRequestQueue;
    id /* block */ _speechSynthesisOutputMetadataBlock;
}

@property (retain, nonatomic) AUAudioUnit_XPC *strongInstance;

+ (void)instantiateWithExtension:(id)a0 componentDescription:(struct AudioComponentDescription { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; })a1 instance:(struct OpaqueAudioComponentInstance { } *)a2 options:(unsigned int)a3 completionHandler:(id /* block */)a4;

- (void).cxx_destruct;
- (void)dealloc;
- (id /* block */)speechSynthesisOutputMetadataBlock;
- (void)setSpeechSynthesisOutputMetadataBlock:(id /* block */)a0;
- (void)requestViewControllerWithCompletionHandler:(id /* block */)a0;
- (void)_doOpen:(id)a0 completion:(id /* block */)a1;
- (void)_internalInitWithExtension:(id)a0 componentDescription:(struct AudioComponentDescription { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; })a1 instance:(struct OpaqueAudioComponentInstance { } *)a2 completion:(id /* block */)a3;

@end
