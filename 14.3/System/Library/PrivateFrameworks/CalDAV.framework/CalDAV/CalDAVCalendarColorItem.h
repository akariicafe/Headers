@class NSString;

@interface CalDAVCalendarColorItem : CoreDAVItem

@property (retain, nonatomic) NSString *symbolicColorName;
@property (retain, nonatomic) NSString *colorString;

- (id)init;
- (void).cxx_destruct;
- (void)write:(id)a0;
- (void)parserFoundAttributes:(id)a0;

@end
