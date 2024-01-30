@class NSNumber;

@interface WFLSMMap : NSObject {
    struct __LSMMap { } *map;
}

@property (copy) NSNumber *threshold;

+ (id)mapFromFilePath:(id)a0;
+ (id)mapWithMap:(struct __LSMMap { } *)a0;
+ (id)mapFromURL:(id)a0;

- (id)initWithMap:(struct __LSMMap { } *)a0;
- (long long)numberOfCategories;
- (struct __LSMMap { } *)_map;
- (void)dealloc;
- (id)evaluate:(id)a0;
- (id)wordDump:(id)a0;
- (id)initWithMapFromURL:(id)a0;
- (id)initWithMapFromFilePath:(id)a0;
- (void)_setMap:(struct __LSMMap { } *)a0;
- (struct __LSMText { } *)_createLSMTextFromString:(id)a0;

@end
