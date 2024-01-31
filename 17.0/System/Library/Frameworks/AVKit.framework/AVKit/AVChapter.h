@class UIImage, NSString;

@interface AVChapter : NSObject <NSCopying> {
    id /* block */ _imageBlock;
}

@property (readonly) UIImage *image;
@property (nonatomic) struct CGImage { } *cgImage;
@property (readonly) double startTime;
@property (readonly) double duration;
@property (readonly) unsigned long long number;
@property (readonly, copy) NSString *title;

+ (void)initialize;
+ (id)chapterAtTime:(double)a0 inChapters:(id)a1;
+ (id)playbackChapterWithStartTime:(double)a0 duration:(double)a1 number:(unsigned long long)a2 title:(id)a3 imageFaultBlock:(id /* block */)a4;

- (id)valueForUndefinedKey:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithStartTime:(double)a0 duration:(double)a1 number:(unsigned long long)a2 title:(id)a3 imageFaultBlock:(id /* block */)a4;
- (void)setCGImage:(struct CGImage { } *)a0;

@end
