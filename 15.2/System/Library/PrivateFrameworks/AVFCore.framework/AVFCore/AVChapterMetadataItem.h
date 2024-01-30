@class AVChapterMetadataItemInternal;

@interface AVChapterMetadataItem : AVMetadataItem {
    AVChapterMetadataItemInternal *_privChapter;
}

- (id)extraAttributes;
- (void)_addFigAssetNotifications;
- (id)dataType;
- (id)keySpace;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })time;
- (id)locale;
- (id)_initWithAsset:(id)a0 chapterGroupIndex:(long long)a1 chapterIndex:(long long)a2 chapterType:(id)a3 extendedLanguageTag:(id)a4 languageCode:(id)a5 chapterDataType:(id)a6 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a7 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a8;
- (id)commonKey;
- (BOOL)_valueForKeyDependsOnMetadataValue:(id)a0;
- (long long)_valueStatus;
- (void)_ensureValueLoadedSync;
- (void)_setValueStatus:(long long)a0 figErrorCode:(int)a1;
- (void)_takeValueFrom:(id)a0;
- (id)startDate;
- (long long)_chapterGroupIndex;
- (long long)_chapterIndex;
- (long long)statusOfValueForKey:(id)a0 error:(id *)a1;
- (void)_removeFigAssetNotifications;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)value;
- (id)key;
- (id)description;
- (void)cancelLoading;
- (id)languageCode;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)loadValuesAsynchronouslyForKeys:(id)a0 completionHandler:(id /* block */)a1;
- (void)dealloc;
- (id)extendedLanguageTag;

@end
