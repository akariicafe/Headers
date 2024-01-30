@class NSString, NSProgress, NSURL, PICompositionController, NSArray;
@protocol PUVideoURLNode, PUImageInfoNode, PXRunNodeDelegate;

@interface PUVideoExportNode : PXRunNode <PUVideoURLExportNode>

@property (retain, nonatomic) NSURL *videoURL;
@property (retain, nonatomic) NSProgress *exportProgress;
@property (readonly, nonatomic) id<PUVideoURLNode> videoURLNode;
@property (readonly, nonatomic) id<PUImageInfoNode> imageInfoNode;
@property (readonly, nonatomic) unsigned long long quality;
@property (readonly, nonatomic) double progress;
@property (readonly, copy, nonatomic) PICompositionController *compositionController;
@property (readonly, copy, nonatomic) NSString *livePhotoPairingIdentifier;
@property (readonly, nonatomic) struct CGSize { double width; double height; } renderedVideoSize;
@property (readonly) unsigned long long state;
@property (readonly, getter=isWaiting) BOOL waiting;
@property (readonly, getter=isRunning) BOOL running;
@property (readonly, getter=isComplete) BOOL complete;
@property (readonly, getter=isCanceled) BOOL canceled;
@property (weak, nonatomic) id<PXRunNodeDelegate> delegate;
@property (readonly, copy, nonatomic) NSArray *dependencies;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)run;
- (void)didCancel;
- (void).cxx_destruct;
- (id)initWithVideoURLNode:(id)a0 imageURLNode:(id)a1 quality:(unsigned long long)a2 livePhotoPairingIdentifier:(id)a3 compositionController:(id)a4;
- (id)_editSource;
- (id)_newOutputURL;
- (id)_exportPresetName;
- (void)_handleExportCompletedWithSuccess:(BOOL)a0 editedSize:(struct CGSize { double x0; double x1; })a1 error:(id)a2;

@end
