@class NSString;

@interface INJSONEncoderConfiguration : NSObject <NSCopying>

@property (copy, nonatomic) NSString *languageCode;
@property (nonatomic) BOOL locationIncludesTimestamp;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;

@end
