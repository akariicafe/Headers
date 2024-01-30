@class NSData, PLMediaAnalysisAssetAttributes, NSDate;

@interface PLVisualSearchAttributes : PLManagedObject

@property (retain, nonatomic) NSData *visualSearchData;
@property (nonatomic) short algorithmVersion;
@property (retain, nonatomic) NSDate *adjustmentVersion;
@property (retain, nonatomic) PLMediaAnalysisAssetAttributes *mediaAnalysisAssetAttributes;

+ (id)entityName;

@end
