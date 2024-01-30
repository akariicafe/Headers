@class NSString;

@interface INJSONEncoderConfiguration : NSObject <NSCopying>

@property (copy, nonatomic) NSString *languageCode;
@property (nonatomic) BOOL locationIncludesTimestamp;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
