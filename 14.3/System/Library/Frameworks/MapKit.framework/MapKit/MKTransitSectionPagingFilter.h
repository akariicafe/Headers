@interface MKTransitSectionPagingFilter : NSObject

@property (nonatomic) BOOL limitNumLines;
@property (nonatomic) unsigned long long numLinesFallbackThreshold;
@property (nonatomic) unsigned long long numLinesFallbackValue;

+ (id)defaultFilterForDepartures;
+ (id)defaultFilterForInactiveLines;

@end
