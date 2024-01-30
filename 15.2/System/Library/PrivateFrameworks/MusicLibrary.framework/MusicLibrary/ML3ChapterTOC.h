@class ML3Track;

@interface ML3ChapterTOC : MLITChapterTOC {
    ML3Track *_track;
}

- (void).cxx_destruct;
- (id)initWithChapterDataRef:(struct ChapterData { } *)a0 track:(id)a1;

@end
