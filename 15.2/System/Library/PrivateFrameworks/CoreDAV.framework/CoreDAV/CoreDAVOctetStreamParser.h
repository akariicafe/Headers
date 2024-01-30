@class NSMutableData, NSError, NSString;

@interface CoreDAVOctetStreamParser : NSObject <CoreDAVResponseBodyParser> {
    NSError *_parserError;
}

@property (retain, nonatomic) NSMutableData *octetStreamData;
@property (readonly) NSError *parserError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canHandleContentType:(id)a0;

@end
