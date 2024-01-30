@class NSString;

@interface SCWatchlistReorderSymbol2Command : NSObject <SCKZoneCommand>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *symbol;
@property (readonly, nonatomic) unsigned long long toIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)executeWithZone:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithSymbol:(id)a0 toIndex:(unsigned long long)a1;

@end
