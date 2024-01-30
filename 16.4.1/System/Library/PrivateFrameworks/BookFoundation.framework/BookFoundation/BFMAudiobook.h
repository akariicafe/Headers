@class NSString, NSDictionary;

@interface BFMAudiobook : BFMAssetBase

@property (nonatomic, readonly) NSString *seriesName;
@property (nonatomic, readonly) NSDictionary *seriesInfo;
@property (nonatomic, readonly) long long type;

@end
