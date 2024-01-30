@class NSString, NSDictionary;

@interface CKVSimulatedPriorRetriever : NSObject <CKVPriorRetriever> {
    NSDictionary *_simulatedPriors;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
