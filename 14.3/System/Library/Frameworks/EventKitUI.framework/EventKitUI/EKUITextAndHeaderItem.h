@class NSString, NSDictionary;

@interface EKUITextAndHeaderItem : NSObject

@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSString *header;
@property (nonatomic) long long lines;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;

+ (id)itemWithText:(id)a0 andHeader:(id)a1;

- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)a0;

@end
