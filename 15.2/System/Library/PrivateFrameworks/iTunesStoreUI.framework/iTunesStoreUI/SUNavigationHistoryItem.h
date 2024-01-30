@class NSString, SSURLRequestProperties;

@interface SUNavigationHistoryItem : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) SSURLRequestProperties *URLRequestProperties;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (void)dealloc;

@end
