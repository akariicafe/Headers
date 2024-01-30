@class NSString;

@interface CalDAVPostStreamTask : CoreDAVPostTask

@property (retain, nonatomic) NSString *previousScheduleTag;
@property (retain, nonatomic) NSString *filename;

- (id)requestBody;
- (id)additionalHeaderValues;
- (id)copyDefaultParserForContentType:(id)a0;
- (id)responseData;
- (void).cxx_destruct;
- (id)requestBodyStream;
- (id)lossyAsciiFilename;
- (id)utf8PercentEscapedFilename;

@end
