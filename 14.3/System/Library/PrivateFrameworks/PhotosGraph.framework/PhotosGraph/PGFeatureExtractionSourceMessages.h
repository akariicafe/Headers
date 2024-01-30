@class NSString;

@interface PGFeatureExtractionSourceMessages : NSObject <PGFeatureExtractionSource>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)extractSharingRecordsWithManager:(id)a0 progressBlock:(id /* block */)a1;

@end
