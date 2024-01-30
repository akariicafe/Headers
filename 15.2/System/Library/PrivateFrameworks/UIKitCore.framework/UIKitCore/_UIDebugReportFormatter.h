@class NSString;

@interface _UIDebugReportFormatter : NSObject

@property (nonatomic) unsigned long long indentLevel;
@property (copy, nonatomic) NSString *indentString;
@property (nonatomic) unsigned long long extraBodyIndentLevel;

+ (id)defaultFormatter;

- (void).cxx_destruct;
- (id)init;
- (id)stringFromReportComponents:(id)a0;

@end
