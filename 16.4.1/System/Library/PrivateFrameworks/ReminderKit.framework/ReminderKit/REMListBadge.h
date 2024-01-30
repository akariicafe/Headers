@class NSString;

@interface REMListBadge : NSObject

@property (copy, nonatomic) NSString *emblem;
@property (copy, nonatomic) NSString *emoji;
@property (readonly, copy, nonatomic) NSString *rawValue;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithEmoji:(id)a0;
- (id)initWithEmblem:(id)a0;
- (id)initWithRawValue:(id)a0;
- (id)_emojiFromRawString:(id)a0;
- (BOOL)_isJSONString:(id)a0;
- (BOOL)_isSingleCharacterEmoji:(id)a0;

@end
