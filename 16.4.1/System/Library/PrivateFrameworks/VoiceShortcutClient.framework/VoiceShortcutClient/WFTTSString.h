@class NSArray, NSString;

@interface WFTTSString : NSObject

@property (readonly, nonatomic) NSArray *components;
@property (readonly, nonatomic) NSString *displayString;

+ (id)parseAnnotatedString:(id)a0;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithComponents:(id)a0;

@end
