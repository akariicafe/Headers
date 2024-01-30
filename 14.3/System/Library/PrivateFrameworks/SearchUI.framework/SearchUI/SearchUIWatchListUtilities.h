@class NSString;

@interface SearchUIWatchListUtilities : NSObject

@property (nonatomic) BOOL isWatchListed;
@property (retain, nonatomic) NSString *watchListIdentifier;

+ (void)generateWatchListReponseForWatchListIdentifier:(id)a0 completion:(id /* block */)a1;

- (void).cxx_destruct;
- (void)toggleWatchListWithCompletion:(id /* block */)a0;
- (id)initWithIdentifier:(id)a0 watchListed:(BOOL)a1;
- (id)initWithResponse:(id)a0;

@end
