@class NSString;

@interface CalDAVCalendarColorItem : CoreDAVItem

@property (retain, nonatomic) NSString *symbolicColorName;
@property (retain, nonatomic) NSString *colorString;

- (void)write:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)parserFoundAttributes:(id)a0;

@end
