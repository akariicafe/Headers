@class NSSet, DDScannerResult;

@interface CHDataDetectorQueryItem : NSObject

@property (readonly, copy, nonatomic) NSSet *strokeIdentifiers;
@property (readonly, retain, nonatomic) DDScannerResult *dataDetectorResult;
@property (readonly, nonatomic) const struct CGPath { } *estimatedBaseline;

- (void)dealloc;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToDataDetectorQueryItem:(id)a0;
- (id)initWithStrokeIdentifiers:(id)a0 detectedResult:(id)a1 estimatedBaseline:(struct CGPath { } *)a2;

@end
