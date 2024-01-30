@class NSString;

@interface INJSONEncoderConfiguration : NSObject <NSCopying>

@property (copy, nonatomic) NSString *languageCode;
@property (nonatomic) BOOL locationIncludesTimestamp;

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
