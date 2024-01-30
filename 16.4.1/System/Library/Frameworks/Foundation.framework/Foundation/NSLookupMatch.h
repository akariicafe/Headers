@class NSString, NSTextCheckingResult;

@interface NSLookupMatch : NSObject

@property (retain) NSTextCheckingResult *dataDetectorResult;
@property (retain) NSString *languageIdentifier;
@property (readonly) unsigned long long matchType;
@property (readonly) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (readonly) double score;

+ (id)matchesInString:(id)a0 types:(unsigned long long)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;

- (void)dealloc;
- (id)description;
- (id)initWithType:(unsigned long long)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 score:(double)a2;

@end
