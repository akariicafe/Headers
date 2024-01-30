@class NSString, NSArray;

@interface CNVCardParsedLine : NSObject

@property (readonly, copy) NSString *name;
@property (retain) id value;
@property (copy) NSArray *parameters;
@property BOOL isPrimary;
@property (copy) NSString *grouping;

- (id)initWithName:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
