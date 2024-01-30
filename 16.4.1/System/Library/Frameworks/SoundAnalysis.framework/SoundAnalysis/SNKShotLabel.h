@interface SNKShotLabel : NSObject

@property (readonly) long long type;

+ (id)new;

- (id)init;
- (id)initAsNegativeLabel;
- (id)initAsPositiveLabel;

@end
