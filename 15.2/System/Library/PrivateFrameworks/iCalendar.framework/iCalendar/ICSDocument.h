@class ICSCalendar;

@interface ICSDocument : NSObject {
    ICSCalendar *_calendar;
}

+ (int)ICSChecksumVersionSpecifiedInOptions:(unsigned long long)a0;
+ (void)suppressParserSyntaxErrorLogging;

- (id)calendar;
- (id)ICSDataWithOptions:(unsigned long long)a0;
- (id)initWithContentsOfURL:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)initWithCalendar:(id)a0;
- (BOOL)validate:(id *)a0;
- (id)initWithData:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (id)ICSStringWithOptions:(unsigned long long)a0;
- (id)ICSChecksumStringForVersion:(int)a0;
- (id)initWithICSString:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (id)initWithData:(id)a0 encoding:(unsigned long long)a1 options:(unsigned long long)a2 error:(id *)a3;
- (id)ICSCompressedDataWithOptions:(unsigned long long)a0;
- (id)ICSChecksumForVersion:(int)a0;

@end
