@class NSString;

@interface SCWatchlistReplaceSymbolCommand : NSObject <SCKZoneCommand>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *oldSymbol;
@property (readonly, copy, nonatomic) NSString *replacementSymbol;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)executeWithZone:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithOldSymbol:(id)a0 replacementSymbol:(id)a1;

@end
