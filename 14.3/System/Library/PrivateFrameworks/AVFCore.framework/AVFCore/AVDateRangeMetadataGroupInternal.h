@class NSArray, NSString, NSDictionary, NSDate;

@interface AVDateRangeMetadataGroupInternal : NSObject {
    NSDate *startDate;
    NSDate *endDate;
    NSArray *metadataItems;
    NSString *classifyingLabel;
    NSString *uniqueID;
    NSDate *discoveryTimestamp;
    NSDate *modificationTimestamp;
    NSDictionary *extraFigProperties;
}

@end
