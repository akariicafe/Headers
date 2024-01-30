@class NSArray, NSURL;

@interface HDFHIRResourceSearchSet : NSObject

@property (readonly, copy, nonatomic) NSArray *entries;
@property (readonly, copy, nonatomic) NSURL *serverBaseURL;
@property (readonly, copy, nonatomic) NSURL *pageURL;
@property (readonly, copy, nonatomic) NSURL *nextPageURL;

+ (id)searchSetWithFHIRJSONObject:(id)a0 serverBaseURL:(id)a1 error:(id *)a2;

- (void).cxx_destruct;
- (id)_initWithEntries:(id)a0 serverBaseURL:(id)a1 pageURL:(id)a2 nextPageURL:(id)a3;

@end
