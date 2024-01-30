@class NSString, NSArray;

@interface CNVCardParsedLine : NSObject

@property (readonly, copy) NSString *name;
@property (retain) id value;
@property (copy) NSArray *parameters;
@property BOOL isPrimary;
@property (copy) NSString *grouping;

- (void).cxx_destruct;
- (id)description;
- (id)initWithName:(id)a0;

@end
