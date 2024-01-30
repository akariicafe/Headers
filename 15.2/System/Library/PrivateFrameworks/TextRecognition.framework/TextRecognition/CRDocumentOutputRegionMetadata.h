@class NSString;

@interface CRDocumentOutputRegionMetadata : NSObject <CRCodable>

@property unsigned long long numFilteredRegions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
