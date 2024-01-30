@class NSArray, NSString;

@interface SCWatchlistAddDefaultSymbolsCommand : NSObject <SCKZoneCommand>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *symbols;
@property (readonly, nonatomic) BOOL deferUpload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)executeWithZone:(id)a0;
- (BOOL)shouldDeferUpload;
- (id)initWithSymbols:(id)a0 deferUpload:(BOOL)a1;

@end
