@class NSArray, NSString, NSMutableArray;

@interface GEOServerFormatStyleParser : NSObject {
    NSString *_string;
    NSMutableArray *_styleNames;
    NSMutableArray *_styleRanges;
    NSMutableArray *_tokenRanges;
    NSArray *_results;
    NSMutableArray *_openStyleNames;
    NSMutableArray *_openStyleLocations;
    BOOL _parsed;
}

@property (readonly, nonatomic) NSArray *styles;
@property (readonly, nonatomic) NSArray *tokenRanges;

- (void)_parse;
- (id)init;
- (void).cxx_destruct;
- (id)initWithString:(id)a0;
- (void)_parseIfNeeded;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeForStyleAtIndex:(unsigned long long)a0;
- (void)enumerateStylesWithBlock:(id /* block */)a0;
- (void)_removeTokensFromAttributedString:(id)a0;
- (BOOL)_handleOpeningResult:(id)a0;
- (BOOL)_handleClosingResult:(id)a0;
- (void)enumerateTokenRangesForRemoval:(id /* block */)a0;
- (id)attributedStringWithStyleAttributes:(id)a0 defaultAttributes:(id)a1;

@end
