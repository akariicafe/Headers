@class NSString;

@interface VUIBookmarkKey : NSObject

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long keyType;

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)initWithIdentifier:(id)a0 keyType:(long long)a1;

@end
