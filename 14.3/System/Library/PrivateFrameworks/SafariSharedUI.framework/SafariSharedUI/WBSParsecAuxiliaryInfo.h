@class NSString;

@interface WBSParsecAuxiliaryInfo : WBSParsecModel

@property (readonly, copy, nonatomic) NSString *topText;
@property (readonly, copy, nonatomic) NSString *middleText;
@property (readonly, copy, nonatomic) NSString *bottomText;
@property (readonly, copy, nonatomic) NSString *bottomTextColor;

+ (id)schema;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
