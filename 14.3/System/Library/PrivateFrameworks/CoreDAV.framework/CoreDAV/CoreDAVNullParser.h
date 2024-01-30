@class NSError, NSString;

@interface CoreDAVNullParser : NSObject <CoreDAVResponseBodyParser> {
    NSError *_parserError;
}

@property (readonly) NSError *parserError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canHandleContentType:(id)a0;

- (void).cxx_destruct;
- (BOOL)processData:(id)a0 forTask:(id)a1;

@end
