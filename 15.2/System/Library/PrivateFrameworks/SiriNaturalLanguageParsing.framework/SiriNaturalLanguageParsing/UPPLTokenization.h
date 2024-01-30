@class NSString, NSArray;

@interface UPPLTokenization : NSObject

@property (readonly, nonatomic) NSString *originalUtterance;
@property (readonly, nonatomic) NSString *normalizedUtterance;
@property (readonly, nonatomic) NSArray *tokens;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithTokens:(id)a0 originalUtterance:(id)a1 normalizedUtterance:(id)a2;

@end
