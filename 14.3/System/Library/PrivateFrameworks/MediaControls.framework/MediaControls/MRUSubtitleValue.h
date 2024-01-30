@class NSString;

@interface MRUSubtitleValue : NSObject

@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) long long accessory;

- (void).cxx_destruct;
- (id)description;
- (id)initWithText:(id)a0 accessory:(long long)a1;
- (BOOL)isEqualToSubtitleValue:(id)a0;

@end
