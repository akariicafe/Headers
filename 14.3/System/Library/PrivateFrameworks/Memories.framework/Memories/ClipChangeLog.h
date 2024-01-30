@class NSMutableDictionary, KonaClip;

@interface ClipChangeLog : NSObject {
    KonaClip *m_clip;
    NSMutableDictionary *m_capturedClipContents;
}

- (void)dealloc;
- (id)description;
- (id)initWithClip:(id)a0 project:(id)a1;
- (void)restoreClipInProject:(id)a0;

@end
