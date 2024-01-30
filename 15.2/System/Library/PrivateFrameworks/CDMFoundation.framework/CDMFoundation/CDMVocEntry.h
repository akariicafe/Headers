@class NSString, NSArray;

@interface CDMVocEntry : NSObject

@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) NSString *semantic;
@property (readonly, nonatomic) NSArray *metadata;

- (void)setMetadata:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithText:(id)a0 label:(id)a1 semantic:(id)a2;

@end
