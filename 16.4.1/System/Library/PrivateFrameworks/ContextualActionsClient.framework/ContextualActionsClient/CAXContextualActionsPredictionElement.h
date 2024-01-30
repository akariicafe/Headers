@class NSString, NSNumber;

@interface CAXContextualActionsPredictionElement : NSObject

@property (retain, nonatomic) NSString *encodedActionIdentifier;
@property (retain, nonatomic) NSNumber *frequency;
@property (retain, nonatomic) NSNumber *normalizedFrequency;
@property (retain, nonatomic) NSNumber *priorTotal;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 frequency:(id)a1;
- (id)initWithIdentifier:(id)a0 frequency:(id)a1 normalizedFrequency:(id)a2 priorTotal:(id)a3;

@end
