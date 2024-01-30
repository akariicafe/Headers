@class NSMutableDictionary;

@interface CTBandInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableDictionary *fActiveBands;
@property (retain, nonatomic) NSMutableDictionary *fSupportedBands;

- (id)activeBands;
- (id)supportedBands;
- (BOOL)addActiveBand:(id)a0 forRat:(id)a1;
- (id)supportedBandsForRat:(id)a0;
- (id)activeBandsForRat:(id)a0;
- (id)initWithSupported:(id)a0 andActiveBands:(id)a1;
- (BOOL)addSupportedBands:(id)a0 forRat:(id)a1;
- (BOOL)addSupportedBand:(id)a0 forRat:(id)a1;
- (id)initWithActiveBands:(id)a0;
- (BOOL)addActiveBands:(id)a0 forRat:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (id)initWithSupportedBands:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
