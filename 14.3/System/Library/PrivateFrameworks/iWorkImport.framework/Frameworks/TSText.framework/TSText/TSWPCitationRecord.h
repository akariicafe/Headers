@class NSString;

@interface TSWPCitationRecord : TSPObject {
    NSString *_endNoteXML;
    BOOL _hideAuthorNames;
    BOOL _hideYear;
    NSString *_pageRange;
    NSString *_prefix;
    NSString *_suffix;
    NSString *_authorsString;
    NSString *_title;
    NSString *_year;
    NSString *_type;
}

@property (nonatomic) BOOL recordXMLApplied;
@property (copy, nonatomic) NSString *endNoteXML;
@property (nonatomic) BOOL hideAuthorNames;
@property (nonatomic) BOOL hideYear;
@property (copy, nonatomic) NSString *pageRange;
@property (copy, nonatomic) NSString *prefix;
@property (copy, nonatomic) NSString *suffix;
@property (copy, nonatomic) NSString *authorsString;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *year;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) BOOL shouldRemove;
@property (readonly, nonatomic) NSString *cacheKey;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithContext:(id)a0;
- (id)description;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (void)p_copyPropertiesToObject:(id)a0;
- (id)p_endNoteXMLForComparison;
- (id)authorYearString;
- (BOOL)isRecordEqual:(id)a0;

@end
