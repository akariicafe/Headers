@class NSString;

@interface SCWWatchlistReplaceSymbolInWatchlistCommand : NSObject <SCWZoneCommand>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *oldSymbol;
@property (readonly, copy, nonatomic) NSString *replacementSymbol;
@property (readonly, copy, nonatomic) NSString *watchlistIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)executeWithZone:(id)a0;
- (id)initWithOldSymbol:(id)a0 replacementSymbol:(id)a1 watchlistIdentifier:(id)a2;

@end
