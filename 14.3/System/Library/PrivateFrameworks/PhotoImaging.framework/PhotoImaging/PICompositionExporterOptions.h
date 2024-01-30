@class NUColorSpace, NUPriority, NSString;
@protocol NUScalePolicy;

@interface PICompositionExporterOptions : NSObject

@property (retain) NUPriority *priority;
@property (retain) NUColorSpace *colorSpace;
@property (copy) NSString *pairingIdentifier;
@property (retain) id<NUScalePolicy> scalePolicy;

- (id)init;
- (void).cxx_destruct;
- (id)description;

@end
