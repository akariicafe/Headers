@class NSString;

@interface CoreDAVSyncReportItem : CoreDAVMultiStatusItem

@property (readonly, nonatomic) NSString *syncToken;

+ (id)copyParseRules;

- (void).cxx_destruct;
- (id)description;
- (void)_setSyncTokenItem:(id)a0;

@end
