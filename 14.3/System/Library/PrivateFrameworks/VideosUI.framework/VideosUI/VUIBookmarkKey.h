@class NSString;

@interface VUIBookmarkKey : NSObject

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long keyType;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)initWithIdentifier:(id)a0 keyType:(long long)a1;

@end
