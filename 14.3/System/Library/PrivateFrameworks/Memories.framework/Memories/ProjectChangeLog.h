@class PVEffect, NSSet, NSString, NSMutableSet, Project, NSMutableArray, NSMutableDictionary;

@interface ProjectChangeLog : NSObject {
    Project *m_project;
    NSString *m_themeID;
    NSMutableArray *m_editList;
    NSMutableArray *m_backgroundAudioClips;
    NSMutableArray *m_foregroundAudioClips;
    NSMutableArray *m_cutaways;
    NSMutableSet *m_clipsNeedingDisplay;
    NSMutableSet *m_capturedClips;
    NSMutableArray *m_clipChangeLogs;
    BOOL m_useThemeAudio;
    BOOL m_fadeInFromBlack;
    BOOL m_fadeOutToBlack;
    NSString *m_audioTimePitchAlgorithm;
    NSMutableDictionary *m_trailerDict;
}

@property (readonly, nonatomic) NSSet *capturedClips;
@property (readonly, nonatomic) NSSet *clipsNeedingDisplay;
@property (readonly, nonatomic) BOOL hasChanges;
@property (copy, nonatomic) PVEffect *filterEffect;

- (id)initWithProject:(id)a0;
- (void)dealloc;
- (id)description;
- (void)captureProject:(id)a0;
- (void)captureClip:(id)a0 needsDisplay:(BOOL)a1;
- (id)redoProjectChangeLog;
- (id)restoreProject;

@end
