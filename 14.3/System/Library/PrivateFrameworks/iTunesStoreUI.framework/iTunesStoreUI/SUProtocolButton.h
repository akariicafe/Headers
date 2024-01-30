@class NSDictionary, NSString, NSURL;

@interface SUProtocolButton : NSObject <NSCopying>

@property (readonly, nonatomic) NSDictionary *buttonDictionary;
@property (readonly, nonatomic) NSString *buttonLocation;
@property (readonly, nonatomic) NSString *buttonTarget;
@property (readonly, nonatomic) NSString *buttonTitle;
@property (readonly, nonatomic) NSURL *URL;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithButtonDictionary:(id)a0;

@end
