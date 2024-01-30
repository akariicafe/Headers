@class NSArray, NSMutableSet;

@interface PPParsedCSSI : NSObject

@property (retain, nonatomic) NSArray *identifiers;
@property (retain, nonatomic) NSMutableSet *neStrings;
@property (retain, nonatomic) NSMutableSet *topicStrings;

- (void).cxx_destruct;
- (id)init;

@end
