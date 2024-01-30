@class NSString, NSArray, BLSHFlipbookFramesHistogram;

@interface BLSHFlipbookInvalidationTelemetryData : NSObject

@property (readonly, nonatomic) double timestamp;
@property (readonly, nonatomic) NSString *reason;
@property (readonly, nonatomic) NSString *source;
@property (readonly, nonatomic) BOOL didClearDateSpecifiers;
@property (readonly, nonatomic) BOOL wasReset;
@property (readonly, nonatomic) BLSHFlipbookFramesHistogram *invalidatedFramesHistogram;
@property (readonly, nonatomic) NSArray *environmentIdentifiers;

- (id)description;
- (void).cxx_destruct;
- (id)initWithTimestamp:(double)a0 reason:(id)a1 source:(id)a2 didClearDateSpecifiers:(BOOL)a3 wasReset:(BOOL)a4 invalidatedFramesHistogram:(id)a5 environmentIdentifiers:(id)a6;

@end
