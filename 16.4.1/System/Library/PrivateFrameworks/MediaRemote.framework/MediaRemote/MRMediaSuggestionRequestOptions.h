@class NSArray, NSString;

@interface MRMediaSuggestionRequestOptions : NSObject <MRMediaSuggestionRequestOptionsConfigurable>

@property (copy, nonatomic) NSArray *bundleIdentifiers;
@property (copy, nonatomic) NSArray *contexts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultOptions;

- (id)initWithBlock:(id /* block */)a0;
- (void).cxx_destruct;

@end
