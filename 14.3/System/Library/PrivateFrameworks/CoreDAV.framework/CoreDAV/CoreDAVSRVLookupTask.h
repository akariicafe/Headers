@class NSString, NSArray;

@interface CoreDAVSRVLookupTask : CoreDAVTask

@property (retain, nonatomic) NSString *serviceString;
@property (retain, nonatomic) NSArray *fetchedRecords;
@property (nonatomic) struct __CFHost { } *host;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (void)performCoreDAVTask;
- (void)finishCoreDAVTaskWithError:(id)a0;
- (id)initWithServiceString:(id)a0;

@end
