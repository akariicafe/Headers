@class NSArray;

@interface ASMeetingResponseTask : ASTask

@property (retain, nonatomic) NSArray *responseItems;

- (void)finishWithError:(id)a0;
- (void).cxx_destruct;
- (id)requestBody;
- (long long)taskStatusForExchangeStatus:(int)a0;
- (id)initWithResponseItems:(id)a0;
- (int)commandCode;
- (BOOL)getTopLevelToken:(char *)a0 outStatusCodePage:(char *)a1 outStatusToken:(char *)a2;
- (BOOL)processContext:(id)a0;

@end
