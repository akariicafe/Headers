@class NSString;

@interface CalDAVCompItem : CoreDAVItem

@property (retain, nonatomic) NSString *nameAttribute;

- (void)write:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)parserFoundAttributes:(id)a0;

@end
