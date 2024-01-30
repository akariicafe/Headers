@class NSString, NSArray;

@interface FCConfigHyperlinkText : NSObject

@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) NSArray *links;

- (id)initWithConfigDictionary:(id)a0;
- (id)initWithText:(id)a0 links:(id)a1;
- (void).cxx_destruct;

@end
