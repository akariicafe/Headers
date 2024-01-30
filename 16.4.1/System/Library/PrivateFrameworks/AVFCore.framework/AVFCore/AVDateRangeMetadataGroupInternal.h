@class NSArray, NSString, NSDictionary, NSDate;

@interface AVDateRangeMetadataGroupInternal : NSObject {
    NSDate *startDate;
    NSDate *endDate;
    NSArray *metadataItems;
    NSString *classifyingLabel;
    NSString *uniqueID;
    NSString *cueingOptions;
    NSDate *discoveryTimestamp;
    NSDate *modificationTimestamp;
    NSDictionary *extraFigProperties;
}

@end
