@class NSLocale;

@interface TTRNLTextSlotParser : NSObject

@property (retain, nonatomic) NSLocale *locale;
@property (nonatomic) void *parser;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithLocale:(id)a0 now:(id)a1;
- (id)parseString:(id)a0 referenceTimeZone:(id)a1;

@end
