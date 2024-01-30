@class NSString;

@interface MRUSubtitleValue : NSObject

@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) long long accessory;

- (id)description;
- (void).cxx_destruct;
- (id)initWithText:(id)a0 accessory:(long long)a1;
- (BOOL)isEqualToSubtitleValue:(id)a0;

@end
