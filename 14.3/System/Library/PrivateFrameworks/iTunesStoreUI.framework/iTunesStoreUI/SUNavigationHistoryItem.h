@class NSString, SSURLRequestProperties;

@interface SUNavigationHistoryItem : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) SSURLRequestProperties *URLRequestProperties;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithDictionary:(id)a0;

@end
