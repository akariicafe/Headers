@class AVChapterMetadataItemInternal;

@interface AVChapterMetadataItem : AVMetadataItem {
    AVChapterMetadataItemInternal *_privChapter;
}

- (id)locale;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })time;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)extraAttributes;
- (long long)statusOfValueForKey:(id)a0 error:(id *)a1;
- (id)_initWithAsset:(id)a0 chapterGroupIndex:(long long)a1 chapterIndex:(long long)a2 chapterType:(id)a3 extendedLanguageTag:(id)a4 languageCode:(id)a5 chapterDataType:(id)a6 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a7 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a8;
- (void)dealloc;
- (void)_addFigAssetNotifications;
- (void)_removeFigAssetNotifications;
- (id)value;
- (void)cancelLoading;
- (id)extendedLanguageTag;
- (id)startDate;
- (id)dataType;
- (id)languageCode;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)key;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (void)loadValuesAsynchronouslyForKeys:(id)a0 completionHandler:(id /* block */)a1;
- (id)keySpace;
- (id)commonKey;
- (long long)_valueStatus;
- (BOOL)_valueForKeyDependsOnMetadataValue:(id)a0;
- (void)_ensureValueLoadedSync;
- (void)_setValueStatus:(long long)a0 figErrorCode:(int)a1;
- (void)_takeValueFrom:(id)a0;
- (long long)_chapterGroupIndex;
- (long long)_chapterIndex;

@end
