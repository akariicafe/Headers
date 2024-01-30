@class NSString, QLThumbnailGenerator;

@interface SXQuickLookService : NSObject <SXQuickLookService>

@property (readonly, nonatomic) QLThumbnailGenerator *generator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (void)fetchThumbnailForFile:(id)a0 size:(struct CGSize { double x0; double x1; })a1 onCompletion:(id /* block */)a2 onError:(id /* block */)a3;

@end
