@class NSArray, NSData;

@interface CPSearchMatcher : NSObject {
    int _options;
    NSArray *_components;
    NSArray *_asciiComponents;
    NSData *_wholeSearchStringData;
    NSData *_context;
}

- (BOOL)matchesUTF8String:(const char *)a0 matchType:(int)a1 matchOptions:(int)a2;
- (BOOL)matchesASCIIString:(const char *)a0 matchType:(int)a1;
- (BOOL)matchesUTF8String:(const char *)a0;
- (BOOL)matchesUTF8String:(const char *)a0 matchType:(int)a1;
- (BOOL)matches:(id)a0 matchType:(int)a1;
- (id)initWithSearchString:(id)a0 andLocale:(id)a1 andOptions:(int)a2;
- (id)initWithSearchString:(id)a0 andLocale:(id)a1;
- (id)initWithSearchString:(id)a0 options:(int)a1;
- (void)dealloc;
- (BOOL)matches:(id)a0;
- (id)initWithSearchString:(id)a0;

@end
