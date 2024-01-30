@class NSDictionary, NSString;

@interface VNANFDMultiDetectorOriginalRequestInfo : NSObject

@property (class, readonly) NSDictionary *requestClassToMultiDetectorClassPerRequestRevision;

@property (readonly) NSString *requestRevisionKey;
@property (readonly) unsigned long long originalRequestResultsIndex;

- (void).cxx_destruct;
- (id)initWithProcessingOptionRequestRevisionKey:(id)a0 originalRequestResultsIndex:(unsigned long long)a1;

@end
