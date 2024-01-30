@class NSMutableSet;
@protocol CAMDisabledPreviewControllerDelegate;

@interface CAMDisabledPreviewController : NSObject

@property (readonly, nonatomic) NSMutableSet *_reasonsForDisablingPreview;
@property (weak, nonatomic) id<CAMDisabledPreviewControllerDelegate> delegate;
@property (readonly, nonatomic, getter=isPreviewDisabled) BOOL previewDisabled;

- (id)init;
- (void).cxx_destruct;
- (void)removeDisabledPreviewReason:(long long)a0;
- (id)_descriptionForReasons:(id)a0;
- (void)addDisabledPreviewReason:(long long)a0;
- (id)_descriptionStringForReason:(long long)a0;

@end
