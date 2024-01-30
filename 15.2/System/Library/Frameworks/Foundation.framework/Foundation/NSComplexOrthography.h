@class NSString, NSDictionary;

@interface NSComplexOrthography : NSOrthography {
    NSString *_dominantScript;
    NSDictionary *_languageMap;
    unsigned int _orthographyFlags;
}

+ (void)initialize;

- (id)languageMap;
- (id)initWithDominantScript:(id)a0 languageMap:(id)a1;
- (id)dominantScript;
- (unsigned int)orthographyFlags;
- (void)dealloc;

@end
