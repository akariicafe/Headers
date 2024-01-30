@class NUColorSpace, NUPriority, NSString;
@protocol NUScalePolicy;

@interface PICompositionExporterOptions : NSObject

@property (retain) NUPriority *priority;
@property (retain) NUColorSpace *colorSpace;
@property (copy) NSString *pairingIdentifier;
@property (retain) id<NUScalePolicy> scalePolicy;

- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
