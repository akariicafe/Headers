@class NSString;

@interface CalDAVPostStreamTask : CoreDAVPostTask

@property (retain, nonatomic) NSString *previousScheduleTag;
@property (retain, nonatomic) NSString *filename;

- (void).cxx_destruct;
- (id)responseData;
- (id)requestBody;
- (id)additionalHeaderValues;
- (id)copyDefaultParserForContentType:(id)a0;
- (id)requestBodyStream;
- (id)lossyAsciiFilename;
- (id)utf8PercentEscapedFilename;

@end
