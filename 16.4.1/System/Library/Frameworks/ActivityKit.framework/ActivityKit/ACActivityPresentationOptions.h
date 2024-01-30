@class NSArray;

@interface ACActivityPresentationOptions : NSObject <NSCopying>

@property (nonatomic, getter=isUserDismissalAllowedOnLockScreen) BOOL userDismissalAllowedOnLockScreen;
@property (nonatomic) BOOL showsAuthorizationOptions;
@property (retain, nonatomic) NSArray *destinations;
@property (nonatomic) long long authorizationOptionsType;

- (id)_init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDestinations:(id)a0;
- (void).cxx_destruct;
- (id)initFromSwift:(BOOL)a0;

@end
