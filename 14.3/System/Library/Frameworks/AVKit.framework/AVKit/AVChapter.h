@class NSString, UIImage;

@interface AVChapter : NSObject <NSCopying> {
    id /* block */ _imageBlock;
}

@property (readonly) double startTime;
@property (readonly) double duration;
@property (readonly) unsigned long long number;
@property (readonly, copy) NSString *title;
@property (readonly) UIImage *image;

+ (void)initialize;
+ (id)playbackChapterWithStartTime:(double)a0 duration:(double)a1 number:(unsigned long long)a2 title:(id)a3 imageFaultBlock:(id /* block */)a4;
+ (id)chapterAtTime:(double)a0 inChapters:(id)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithStartTime:(double)a0 duration:(double)a1 number:(unsigned long long)a2 title:(id)a3 imageFaultBlock:(id /* block */)a4;

@end
