@class NSString, MKLocalSearch;

@interface CalGeocoder : NSObject

@property (retain, nonatomic) NSString *locationString;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (retain, nonatomic) MKLocalSearch *search;

+ (void)geocodeLocationString:(id)a0 withCompletionBlock:(id /* block */)a1;

- (void)cancel;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_callCompletionBlockWithResult:(id)a0 error:(id)a1;
- (id)initWithLocationString:(id)a0 andCompletionBlock:(id /* block */)a1;
- (void)startGeocoding;

@end
