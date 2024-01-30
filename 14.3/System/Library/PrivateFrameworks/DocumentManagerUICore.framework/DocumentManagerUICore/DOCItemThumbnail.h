@class DOCThumbnailDescriptor, NSString, DOCThumbnailRequest, NSHashTable, UIImage, FPItem, DOCThumbnailGenerator, NSMutableArray;
@protocol DOCThumbnail;

@interface DOCItemThumbnail : NSObject <DOCThumbnailListener, DOCThumbnail> {
    NSMutableArray *_generationCompletionHandlers;
}

@property (nonatomic) BOOL representativeIcon;
@property (readonly, weak, nonatomic) DOCThumbnailGenerator *generator;
@property (readonly, nonatomic) DOCThumbnailDescriptor *descriptor;
@property (readonly, nonatomic) BOOL needsUpdate;
@property (readonly, nonatomic) NSHashTable *listeners;
@property (readonly, nonatomic) DOCThumbnailRequest *currentRequest;
@property (readonly, nonatomic) UIImage *thumbnailImage;
@property (readonly, nonatomic) FPItem *item;
@property (retain, nonatomic) id<DOCThumbnail> fallback;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;
@property (readonly, nonatomic) double minimumSize;
@property (readonly, nonatomic) double scale;
@property (readonly, nonatomic) unsigned long long style;
@property (readonly, nonatomic, getter=isInteractive) BOOL interactive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic, getter=isLoading) BOOL loading;
@property (readonly, nonatomic) BOOL isRepresentativeIcon;
@property (readonly, nonatomic) UIImage *thumbnail;
@property (readonly) BOOL hasFinishedTryingToFetchCorrectThumbnail;

- (void)setNeedsUpdate;
- (void).cxx_destruct;
- (void)removeListener:(id)a0;
- (void)addListener:(id)a0;
- (void)_notifyListeners;
- (void)updateItemTo:(id)a0;
- (void)fetchWithOptions:(unsigned long long)a0;
- (id)initWithGenerator:(id)a0 item:(id)a1 descriptor:(id)a2 fallback:(id)a3;
- (void)thumbnailLoaded:(id)a0;
- (void)_cancelCurrentRequest;
- (void)scheduleUpdateIfNeeded;
- (void)_callGenerationCompletionHandlers;
- (void)_fetchThumbnailWithOptions:(unsigned long long)a0;
- (void)thumbnailOperationFailedToLoadThumbnail;
- (void)thumbnailOperationDidLoadThumbnail:(id)a0 representativeIcon:(BOOL)a1;
- (id)averageColorInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)registerGenerationCompletionHandler:(id /* block */)a0;

@end
