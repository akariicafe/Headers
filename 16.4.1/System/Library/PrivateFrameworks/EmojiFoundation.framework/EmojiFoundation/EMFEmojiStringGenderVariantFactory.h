@class NSString;

@interface EMFEmojiStringGenderVariantFactory : NSObject

@property (readonly, nonatomic) int gender;
@property (copy, nonatomic) NSString *sourceString;

- (void).cxx_destruct;
- (id)initWithSourceString:(id)a0 gender:(int)a1;
- (id)stringForGenderVariant:(int)a0;

@end
