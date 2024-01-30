@class NSString, CHMutableTokenizedTextResult;

@interface CHResultWithContext : NSObject

@property (retain, nonatomic) NSString *leftContext;
@property int contentType;
@property (retain, nonatomic) CHMutableTokenizedTextResult *result;

- (void)dealloc;
- (id)initWithResult:(id)a0 leftContext:(id)a1 contentType:(int)a2;

@end
