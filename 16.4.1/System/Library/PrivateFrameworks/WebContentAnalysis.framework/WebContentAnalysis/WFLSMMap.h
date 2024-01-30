@class NSNumber;

@interface WFLSMMap : NSObject {
    struct __LSMMap { } *map;
}

@property (copy) NSNumber *threshold;

+ (id)mapFromFilePath:(id)a0;
+ (id)mapFromURL:(id)a0;
+ (id)mapWithMap:(struct __LSMMap { } *)a0;

- (id)evaluate:(id)a0;
- (void)dealloc;
- (struct __LSMMap { } *)_map;
- (id)initWithMap:(struct __LSMMap { } *)a0;
- (long long)numberOfCategories;
- (struct __LSMText { } *)_createLSMTextFromString:(id)a0;
- (void)_setMap:(struct __LSMMap { } *)a0;
- (id)initWithMapFromFilePath:(id)a0;
- (id)initWithMapFromURL:(id)a0;
- (id)wordDump:(id)a0;

@end
