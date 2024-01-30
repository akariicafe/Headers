@class NSString, QLThumbnailGenerator;

@interface SXQuickLookService : NSObject <SXQuickLookService>

@property (readonly, nonatomic) QLThumbnailGenerator *generator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)fetchThumbnailForFile:(id)a0 size:(struct CGSize { double x0; double x1; })a1 onCompletion:(id /* block */)a2 onError:(id /* block */)a3;

@end
