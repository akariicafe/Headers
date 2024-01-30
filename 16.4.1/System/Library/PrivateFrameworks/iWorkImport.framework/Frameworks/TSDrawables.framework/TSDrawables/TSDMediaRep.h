@class NSString, TSDMediaLayout, TSDFrameRep, TSDMediaInfo;

@interface TSDMediaRep : TSDStyledRep <CALayerDelegate>

@property (readonly, nonatomic) TSDMediaInfo *mediaInfo;
@property (readonly, nonatomic) TSDMediaLayout *mediaLayout;
@property (retain, nonatomic) TSDFrameRep *frameRep;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isPlaceholder;
- (void)dealloc;
- (void).cxx_destruct;
- (void)willBeRemoved;
- (BOOL)i_shouldRenderStroke:(id)a0;
- (void)updateFrameRep;

@end
