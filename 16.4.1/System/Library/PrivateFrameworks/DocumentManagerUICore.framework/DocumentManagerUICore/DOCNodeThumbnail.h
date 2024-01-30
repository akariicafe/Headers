@class NSMutableArray, DOCThumbnailDescriptor, DOCThumbnailRequest, NSHashTable, NSString, UIImage, DOCThumbnailGenerator;
@protocol DOCNode, DOCThumbnail;

@interface DOCNodeThumbnail : NSObject <DOCThumbnailListener, DOCThumbnail> {
    NSMutableArray *_generationCompletionHandlers;
}

@property (nonatomic) BOOL representativeIcon;
@property (readonly, weak, nonatomic) DOCThumbnailGenerator *generator;
@property (readonly, nonatomic) DOCThumbnailDescriptor *descriptor;
@property (readonly, nonatomic) BOOL needsUpdate;
@property (readonly, nonatomic) NSHashTable *listeners;
@property (readonly, nonatomic) DOCThumbnailRequest *currentRequest;
@property (readonly, nonatomic) id<DOCNode> node;
@property (readonly, nonatomic) NSString *nodeThumbnailIdentifier;
@property (retain, nonatomic) id<DOCThumbnail> fallback;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;
@property (readonly, nonatomic) double minimumSize;
@property (readonly, nonatomic) double scale;
@property (readonly, nonatomic) unsigned long long style;
@property (readonly, nonatomic, getter=isInteractive) BOOL interactive;
@property (readonly, nonatomic) UIImage *thumbnailImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic, getter=isLoading) BOOL loading;
@property (readonly, nonatomic) BOOL isRepresentativeIcon;
@property (readonly, nonatomic) UIImage *thumbnail;
@property (readonly) BOOL hasFinishedTryingToFetchCorrectThumbnail;

- (void)addListener:(id)a0;
- (void)setNeedsUpdate;
- (void)removeListener:(id)a0;
- (void)_notifyListeners;
- (void).cxx_destruct;
- (void)_callGenerationCompletionHandlers;
- (void)_cancelCurrentRequest;
- (void)_fetchThumbnailWithOptions:(unsigned long long)a0;
- (id)averageColorInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)fetchWithOptions:(unsigned long long)a0;
- (id)initWithGenerator:(id)a0 node:(id)a1 descriptor:(id)a2 fallback:(id)a3;
- (BOOL)registerGenerationCompletionHandler:(id /* block */)a0;
- (void)scheduleUpdateIfNeeded;
- (void)thumbnailLoaded:(id)a0;
- (void)thumbnailOperationDidLoadThumbnail:(id)a0 representativeIcon:(BOOL)a1;
- (void)thumbnailOperationFailedToLoadThumbnail;
- (void)updateNodeThumbnailIdentifierTo:(id)a0;

@end
