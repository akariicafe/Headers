@interface TSWPDropCapCharacterMetricData : NSObject

@property (readonly, nonatomic) BOOL hasLeadingOffset;
@property (nonatomic) double leadingOffset;
@property (readonly, nonatomic) BOOL hasTrailingOffset;
@property (nonatomic) double trailingOffset;

- (id)init;

@end
