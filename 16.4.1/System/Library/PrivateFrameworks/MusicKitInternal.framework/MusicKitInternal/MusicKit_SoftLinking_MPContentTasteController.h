@class NSString, MPContentTasteController;

@interface MusicKit_SoftLinking_MPContentTasteController : NSObject {
    MPContentTasteController *_underlyingContentTasteController;
}

@property (class, readonly, nonatomic) MusicKit_SoftLinking_MPContentTasteController *sharedContentTasteController;
@property (class, readonly, nonatomic) NSString *contentTasteControllerDidChangeNotificationName;

- (void)dealloc;
- (void).cxx_destruct;
- (long long)_contentTasteTypeFromUnderlyingTasteType:(long long)a0;
- (void)_handleContentTasteControllerDidChangeNotification:(id)a0;
- (id)_initWithUnderlyingContentTasteController:(id)a0;
- (long long)_underlyingTasteTypeFromContentTasteType:(long long)a0;
- (void)setTasteType:(long long)a0 forModelObject:(id)a1 completionHandler:(id /* block */)a2;
- (long long)tasteTypeForModelObject:(id)a0;

@end
